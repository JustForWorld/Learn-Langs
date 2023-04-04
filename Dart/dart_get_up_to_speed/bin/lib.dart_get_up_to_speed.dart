import 'dart:math';

dynamic calculation(num a, num b, String? sign) {
  switch (sign) {
    case '+':
      return a + b;
    case '-':
      return a - b;
    case '*':
      return a * b;
    case '/':
      if (b != 0) {
        return a / b;
      } else {
        return 'Division by zero!';
      }
    case '^':
      return pow(a, b);
    case 'log':
      return [log(a), log(b)];
    case 'mod':
      return a ~/ b;
    default:
      return 'Unknown operation!';
  }
}
