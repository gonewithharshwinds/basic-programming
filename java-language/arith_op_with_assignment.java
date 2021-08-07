class arith_op_with_assignment {
  public static void main (String args[]) {
    int a = 5, b = 2, c = 4;
    int a2 = 10, b2 = 4,
    a += 4;
    a2 -= 2;
    b *= 3;
    b2 /= 2;
    c %= 8;
    System.out.println("SUM");
    System.out.println(a);
    System.out.println("SUB");
    System.out.println(a2);    
    System.out.println("MUL");    
    System.out.println(b);    
    System.out.println("DIV");
    System.out.println(b2);    
    System.out.println("MOD");    
    System.out.println(c);    
  }
}
