// Task 1
/*class Marker {
    constructor(color, inkAmount) {
        this.color = color;
        this.inkAmount = inkAmount; // в процентах
    }

    print(text) {
        let printedText = '';
        for (let char of text) {
            if (this.inkAmount <= 0) {
                break;
            }
            if (char !== ' ') {
                this.inkAmount -= 0.5;
            }
            printedText += char;
        }
        console.log(`%c${printedText}`, `color: ${this.color}`);
    }
}

class RefillableMarker extends Marker {
    refill(amount) {
        this.inkAmount += amount;
        if (this.inkAmount > 100) {
            this.inkAmount = 100;
        }
    }
}

let simpleMarker = new Marker('blue', 10);
simpleMarker.print("Hello, this is a test string.");
console.log(`Ink left: ${simpleMarker.inkAmount}%`);

let refillableMarker = new RefillableMarker('red', 10);
refillableMarker.print("Hello, this is a test string.");
console.log(`Ink left: ${refillableMarker.inkAmount}%`);

// Заправляємо маркер
refillableMarker.refill(50);
console.log(`Ink after refill: ${refillableMarker.inkAmount}%`);
refillableMarker.print("Let's see if we can print more text now.");
console.log(`Ink left: ${refillableMarker.inkAmount}%`);*/

// Task 2
/*
class ExtendedDate extends Date {
    constructor(...args) {
        super(...args);
    }

    // Метод для виведення дати (число та місяць) текстом
    getFormattedDate() {
        const months = [
            "січня", "лютого", "березня", "квітня", "травня", "червня", "липня", "серпня", "вересня", "жовтня", "листопада", "грудня"
        ];
        const day = this.getDate();
        const month = months[this.getMonth()];
        return `${day} ${month}`;
    }

    // Метод для перевірки, чи дата минула або майбутня
    isPastOrFuture() {
        const now = new Date();
        return this.getTime() >= now.getTime();
    }

    // Метод для перевірки високосного року
    isLeapYear() {
        const year = this.getFullYear();
        return (year % 4 === 0 && year % 100 !== 0) || year % 400 === 0;
    }

    // Метод, який повертає наступну дату
    getNextDate() {
        const nextDate = new Date(this.getTime());
        nextDate.setDate(this.getDate() + 1);
        return nextDate;
    }
}

// Створення об'єкту класу ExtendedDate
const today = new ExtendedDate();
console.log("Сьогодні:", today.getFormattedDate());
console.log("Чи дата минула або майбутня:", today.isPastOrFuture());
console.log("Чи поточний рік високосний:", today.isLeapYear());
console.log("Наступна дата:", new ExtendedDate(today.getNextDate()).getFormattedDate());
*/

// Task 3

/*class Employee {
    constructor(id, name, position) {
        this.id = id;
        this.name = name;
        this.position = position;
    }
}

class EmpTable {
    constructor(employees) {
        this.employees = employees;
    }
    getHtml() {
        let html = "<table border='1'>";
        html += "<tr><th>ID</th><th>Name</th><th>Position</th></tr>";
        this.employees.forEach(employee => {
            html += `<tr><td>${employee.id}</td><td>${employee.name}</td><td>${employee.position}</td></tr>`;
        });
        html += "</table>";
        return html;
    }
}

const bankEmployees = [
    new Employee(1, "John Doe", "Manager"),
    new Employee(2, "Jane Smith", "Accountant"),
    new Employee(3, "Tom Brown", "Teller"),
];

const empTable = new EmpTable(bankEmployees);
const htmlTable = empTable.getHtml();
document.body.innerHTML = htmlTable;*/

// Task 4
/*class StyledEmpTable extends EmpTable {
    constructor(employees) {
        super(employees);
    }

    getStyles() {
        return "<style>table { width: 100%; border-collapse: collapse; } th, td { padding: 8px; border: 1px solid #ddd; text-align: left; } th { background-color: #f2f2f2; }</style>";
    }

    getHtml() {
        const tableHtml = super.getHtml();
        const styles = this.getStyles();
        return styles + tableHtml;
    }
}

const styledEmpTable = new StyledEmpTable(bankEmployees);
const styledHtmlTable = styledEmpTable.getHtml();
document.body.innerHTML = styledHtmlTable;*/

