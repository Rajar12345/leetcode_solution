/**
 * @param {string} word
 * @return {number}
 */
var minimumPushes = function(word) {
    const charFrequency = {};

    // Count the frequency of each character in the word
    for (let char of word) {
        charFrequency[char] = (charFrequency[char] || 0) + 1;
    }

    // Sort characters based on their frequency in descending order
    const sortedChars = Object.keys(charFrequency).sort((a, b) => charFrequency[b] - charFrequency[a]);

    let totalKeyPresses = 0;
    let keyPosition = 1;
    let keyNumber = 2;

    // Calculate the total key presses based on frequency and key positions
    sortedChars.forEach(char => {
        totalKeyPresses += charFrequency[char] * keyPosition;
        
        // Update key number and position
        if (keyNumber < 9) {
            keyNumber++;
        } else {
            keyNumber = 2;
            keyPosition++;
        }
    });

    return totalKeyPresses;
};
