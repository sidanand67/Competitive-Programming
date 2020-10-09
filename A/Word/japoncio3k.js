const word = (word) => {
    let arrWord = word.split('');
    let upperCount = 0;
    arrWord.forEach((v,i) => {
        if(v.toUpperCase() == v){
            upperCount++;
        }
    })
    if(upperCount > arrWord.lenght/2){
        return word.toUpperCase();
    }else{
        return word.toLowerCase();
    }
}