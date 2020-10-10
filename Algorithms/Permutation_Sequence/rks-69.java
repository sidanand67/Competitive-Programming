class Solution {
    public String getPermutation(int n, int k) {
        // The permutation number will be based on sequence
        // within n factorial. fact starts at n factorial.
        int fact = 1;
        for (int inum = 1; inum <= n; inum++) fact *= inum;
        // Count permutations from 0 instead of from 1
        int ipermutation = k - 1;
        // Keep track of the numbers chosen so far
        boolean[] chosen = new boolean[n];
        // Now assemble the string from the start
        StringBuilder sb = new StringBuilder();
        for (int inum = n; inum >= 1; inum--) {
            fact /= inum;
            int ichoice = ipermutation / fact;
            appendKthPermutation(sb, chosen, ichoice);
            ipermutation = ipermutation % fact;
        }
        return sb.toString();
    }
    private void appendKthPermutation(StringBuilder sb, boolean[] chosen, int ichoice) {
        // Choose the ichoice-th false spot within chosen.
        // Then append that (number + 1) to the string,
        // and fill in the spot as true.
        int count = 0;
        for (int i = 0; i < chosen.length; i++) {
            if (!chosen[i]) {
                if (count == ichoice) {
                    sb.append(i + 1);
                    chosen[i] = true;
                    return;
                } else {
                    count++;
                }
            }
        }
    }
}
