dynamic calculation(num a, num b, String sign) {
  switch(sign) {
    case '+': { return a + b; }
    case '-': { return a - b; }
    case '*': { return a * b; }
    case '/': {
      if (b != 0) {
        return a / b;
      } else { return 'Division by zero!'; }
    }
  }
}