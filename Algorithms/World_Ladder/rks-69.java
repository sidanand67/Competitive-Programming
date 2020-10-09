class Solution {
    public int ladderLength(String beginWord, String endWord, List<String> wordList) {
        if(wordList == null || wordList.size() == 0){
            return 0;
        }
        Set<String> wordsDict = new HashSet<>(wordList);
        if(!wordsDict.contains(endWord)){
            return 0;
        }
        
        Queue<String> queue = new LinkedList<>();
        int iteration = 1;
        queue.offer(beginWord);

        while(!queue.isEmpty()){
            int queueSize = queue.size();
            for(int k=0;k<queueSize; k++){
                String currentWord = queue.poll();
                // check all the iterations of this word replacing one character at a time
                StringBuilder sb = new StringBuilder(currentWord);
                for(int i=0; i<sb.length();i++){
                    for(char ch='a'; ch<='z'; ch++){
                        sb.setCharAt(i, ch);
                        if(wordsDict.contains(sb.toString())){
                            if(sb.toString().equals(endWord)){
                                return iteration+1;
                            }
                            else{
                                queue.offer(sb.toString());
                                wordsDict.remove(sb.toString());
                            }
                        }
                    }
                    sb = new StringBuilder(currentWord);
                }
            }

            iteration++;
        }

        return 0;
    
    }
}