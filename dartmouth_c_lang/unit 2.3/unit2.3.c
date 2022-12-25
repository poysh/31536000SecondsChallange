#include <stdio.h>
#include <assert.h>

int wordCounter(void){
    char word[30];
    int i = 0;
    printf("Please enter a word: ");
    scanf("%s", word);
    while (word[i]!='\0')
        i++;
    printf("The word %s has a length of %d\n", word, i);
    return 0;
}

int findLongestWord(void){
    int i = 0;
    int j = 0;
    int nbWords;
    int longestWord = 0;
    char word[101];
    scanf("%d", &nbWords);
    for(i = 0; i < nbWords; i++){
        scanf("%s", word);
        while(word[j]!='\0')
            j++;
        if(j > longestWord){
            longestWord = j;
        }
    }
    printf("%d", longestWord);
    return 0;
}

int linearSearch(void){
    int list[] = {6, 3, 8, -8, 15, 10, -18, 5, 1, 0};
    int n = 10;
    int item, i, found;

    printf("What number are you looking for? ");
    scanf("%d", &item);
    found = 0;
    i = 0;

    while(!found && i<n){
        if(item == list[i]) found = 1;
        else i++;
    }

    if(!found) printf("Item %d is not part of the list!\n", item);
    else printf("Item %d found at the index %d of the list!\n", item, i);
    return 0;
}

int findLetter(void){
    char word[51];
    int found, i, maxIndex;
    int length = 0;
    
    scanf("%s", word);
    while(word[length] != '\0' && i<51){
        length++;    
    }
    maxIndex = (length % 2 == 0) ? length / 2 - 1 : length / 2;
    printf("len: %d, maxIndex: %d\n", length, maxIndex);

    found = 0;
    i = 0;
    
    while( !found && i < length){
        if (word[i] == 't' || word[i] == 'T') found++;
        else i++;
    }

    if (!found) printf("-1");
    else if (i <= maxIndex) printf("1");
    else printf("2");
    return 0;
}

int bisectionAlgo(){
    int list[] = {-10, -3, 2, 5, 20, 25, 173, 690, 750, 999};
    int n = 10;
    int item;
    int ia, ib, mid, found;

    printf("Which number are you looking for: ");
    scanf("%d", &item);
    ia = 0;
    ib = n-1;
    found = 0;

    while (!found && (ia <= ib)){
        mid = (ia + ib)/2; //middle index
        if (item == list[mid]) {
            found = 1; // found item!
        } else if (item<list[mid]){
            ib = mid - 1; // toss the top half
        } else {
            ia = mid + 1; // toss the bottom half
        }
    }

    if(!found) {
        printf("Number %d was not found in the array!\n", item);
    } else {
        printf("Number %d was found at position %d", item, mid);
    }
    return -1;
}

int bubbleSort(void){
    // Sorting from smallest to largest
    int list[] = {6, 3, 8, -8, 15, 10, -18, 5, 1, 0};
    int n = 10;
    int i, j;
    int swap;

    for(j = 0; j < n-1; j++){
        for(i = 0; i < n-1; i++){
            if (list[i] > list[i+1]){
                swap = list[i];
                list[i] = list[i+1];
                list[i+1] = swap;
            }
        }
    }

    return 0;
}

int findRepeatLetterWord(void){
    // char word[] = { "erroneousnesses"};
    char word[51];
    int i, j, k;
    int length;
    int count;
    char swap;
    
    scanf("%s", word);
    length = 0;
    while(word[length] != '\0') length ++; // get length of word

    // assert(length == 5);
    
    for (j = 0; j < length-1; j++){ // compare and swap letters if needed
        for (i = 0; i < length-j-1; i++){
            if (word[i] > word[i+1]) {
                swap = word[i];
                word[i] = word[i+1];
                word[i+1] = swap;
            }
        }
    }
    // printf("%s", word);

    count = 0;
    k = 0;
    char temp = '.';
    for(k= 0; k < length-1; k++){
        if (word[k] == word[k+1] && temp != word[k]){
            count++;
            k++;
            temp = word[k];
        }

    }

    printf("\nCount: %d", count);

    return 0;
}



int main(void){

    // wordCounter();
    // linearSearch();
    // findLetter();
    // bisectionAlgo();
    // bubbleSort();
    findRepeatLetterWord();

    char word[101];
    int count, i;
    scanf("%d%s", &count, word);
    for (i = 0; i < count; i++){
        printf("%s\n", word);
    }
    return 0;
}