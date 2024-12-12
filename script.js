function appendNumber(number) {
    document.getElementById('display').value += number;
}

function clearDisplay() {
    document.getElementById('display').value = '';
}

function deleteLast() {
    let display = document.getElementById('display').value;
    document.getElementById('display').value = display.slice(0, -1);
}

function calculate() {
    try {
        let displayValue = document.getElementById('display').value;
        if (displayValue.includes('%')) {
            displayValue = handlePercentage(displayValue);
        }
        let result = eval(displayValue);
        document.getElementById('display').value = result;
    } catch (e) {
        document.getElementById('display').value = 'Error';
    }
}

function handlePercentage(displayValue) {
    let parts = displayValue.split('%');
    if (parts.length === 2 && parts[1] === '') {
        // When percentage is at the end, e.g., "50%"
        return parts[0] + '/100';
    } else if (parts.length === 2) {
        // When percentage is in between, e.g., "50% of 200"
        return parts[0] + '*0.01*' + parts[1];
    }
    return displayValue;
}
