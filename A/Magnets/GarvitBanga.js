var n = parseInt(readline(), 10),
    magnet = [],
    numbergroups = 1;
 
for(var i=0; i<n; i++) {
    magnet.push(readline().split(''));
    if(i !== 0) {
        if(magnet[i-1][1] === magnet[i][0]) numbergroups++;// current placed magnet repels the previous magnet then number of groups will increase
        
    }
}
 
print(numbergroups);
