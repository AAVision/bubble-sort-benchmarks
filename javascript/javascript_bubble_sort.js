function bubbleSort(array){
    const start = performance.now();
    const arrayLength = array.length;
    let isSwapped;

    for(let i=0; i< arrayLength; i++){

        isSwapped = false;

        for (let j=0; j<arrayLength-i-1; j++){
            if (array[j] > array[j+1]){
                [array[j], array[j+1]] = [array[j+1], array[j]];
                isSwapped = true;
            }
        }

        if (!isSwapped) 
            break;

    }

    const end = performance.now();
    console.log(`Execution time: ${end - start} ms`);
    return array;
}

function generateNumbers(length){
    return Array(length).fill(0).map(() => Math.floor(Math.random() * 10000));
}

const arrayNumbers = generateNumbers(10000)
const sortedNumbers = bubbleSort(arrayNumbers)