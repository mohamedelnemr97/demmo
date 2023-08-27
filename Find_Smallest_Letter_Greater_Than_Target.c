
char nextGreatestLetter(char* letters, int lettersSize, char target)
{
    /* what we wil do for this problem man come on you can it */
    int counter = 0;
    for (counter = 0; counter < lettersSize; counter++)
    {
        if ((int)target < letters[counter])
        {
            return letters[counter];
        }
        else
        {
            continue;
        }
    }
    return letters[0];
}
