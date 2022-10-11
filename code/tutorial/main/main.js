const axios = require('axios');

async function totalTransactions(locationId, transactionType) {
    const url = `https://jsonmock.hackerrank.com/api/transactions/search?tsxType=${transactionType}`;
    const res = await axios.get(url);
    // console.log(res.data);
    let data = res.data.data;
    const pages = res.data.total_pages;
    for (let i = 2; i <= pages; i++) {
        const res = await axios.get(`${url}&page=${i}`);
        data.push(...res.data.data);
    }
    let result = data.filter(item => item.location.id === locationId);
    let finalData = new Map();
    result.map(element => {
        // replace $ and ,
        element.amount = parseFloat(element.amount.replace('$', '').replace(',', ''));
        if (finalData.has(element.userId)) {
            finalData.set(element.userId, finalData.get(element.userId) + element.amount);
        } else {
            finalData.set(element.userId, element.amount);
        }
    });
    finalData = [...finalData.entries()].sort((a, b) => a[0] - b[0]);
    finalData.forEach(element => {
        element[1] = parseInt(element[1]);
    })
    console.log(finalData);
    return finalData;
}

totalTransactions(1, 'debit');

// select id and name from CANDIDATES

// sort by names

// select id,candidate_id from 