import java.util.Scanner;
import java.util.ArrayList;
import java.util.Date;
import java.util.*;
 abstract class Card {
    private String cardNumber;
    private double balance;

    public Card(String cardNumber) {
        this.cardNumber = cardNumber;
        this.balance = 0.0;
    }

    public String getCardNumber() {
        return cardNumber;
    }

    public double getBalance() {
        return balance;
    }

    public void setBalance(double balance) {
        this.balance = balance;
    }

    public abstract double getInterestRate();

    public abstract double getCreditLimit();
}


 class MasterCard extends Card {
    private static final double INTEREST_RATE = 0.18;
    private static final double CREDIT_LIMIT = 50000.0;

    public MasterCard(String cardNumber) {
        super(cardNumber);
    }

    @Override
    public double getInterestRate() {
        return INTEREST_RATE;
    }

    @Override
    public double getCreditLimit() {
        return CREDIT_LIMIT;
    }
}


 class VisaCard extends Card {
    private static final double INTEREST_RATE = 0.10;
    private static final double CREDIT_LIMIT = 100000.0;

    private int frequentUsagePoints;

    public VisaCard(String cardNumber) {
        super(cardNumber);
        this.frequentUsagePoints = 0;
    }

    public int getFrequentUsagePoints() {
        return frequentUsagePoints;
    }

    public void earnFrequentUsagePoints(double amount) {
        int points = (int) amount;
        frequentUsagePoints += points;
    }

    @Override
    public double getInterestRate() {
        return INTEREST_RATE;
    }

    @Override
    public double getCreditLimit() {
        return CREDIT_LIMIT;
    }
}


 class LocalCard extends Card {
    private static final double INTEREST_RATE = 0.25;
    private static final double INITIAL_CREDIT_LIMIT = 10000.0;
    private static final double IMPROVED_INTEREST_RATE = 0.20;
    private static final double IMPROVED_CREDIT_LIMIT = 150000.0;
    private static final int CONSECUTIVE_PAYOFF_COUNT = 3;

    private int consecutivePayoffCount;

    public LocalCard(String cardNumber) {
        super(cardNumber);
        this.consecutivePayoffCount = 0;
    }

    public int getConsecutivePayoffCount() {
        return consecutivePayoffCount;
    }

    public void incrementConsecutivePayoffCount() {
        consecutivePayoffCount++;
    }

    public void resetConsecutivePayoffCount() {
        consecutivePayoffCount = 0;
    }

    @Override
    public double getInterestRate() {
        if (consecutivePayoffCount >= CONSECUTIVE_PAYOFF_COUNT) {
            return IMPROVED_INTEREST_RATE;
        } else {
            return INTEREST_RATE;
        }
    }

    @Override
    public double getCreditLimit() {
        if (consecutivePayoffCount >= CONSECUTIVE_PAYOFF_COUNT) {
            return IMPROVED_CREDIT_LIMIT;
        } else {
            return INITIAL_CREDIT_LIMIT;
        }
    }
}

 class Checkbook {
    private String accountNumber;
    private String cnicNumber;
    private double balance;

    public Checkbook(String accountNumber, String cnicNumber, double balance) {
        this.accountNumber = accountNumber;
        this.cnicNumber = cnicNumber;
        this.balance = balance;
    }

    public void withdrawMoney(double amount) {
        if (amount <= balance) {
            balance -= amount;
            System.out.println("Amount withdrawn: " + amount);
            System.out.println("Remaining balance: " + balance);
        } else {
            System.out.println("Insufficient funds. Unable to withdraw amount: " + amount);
        }
    }
}





abstract class Accounts{
    private String account_Number;
    private int account_ID;
    private double balance;
    private double minimum_balance;
    private String account_type;
    private boolean is_dormant;
    Accounts(){

    }
    public Accounts(String account_Number, int account_ID, double balance, double minimum_balance, String account_type) {
        this.account_Number = account_Number;
        this.account_ID = account_ID;
        this.balance = balance;
        this.minimum_balance = minimum_balance;
        this.account_type = account_type;
    }

    public boolean isIs_dormant() {
        return is_dormant;
    }
    public void setIs_dormant(boolean is_dormant) {
        this.is_dormant = is_dormant;
    }
    public String getAccount_Number() {
        return account_Number;
    }
    public void setAccount_Number(String account_Number) {
        this.account_Number = account_Number;
    }
    public int getAccount_ID() {
        return account_ID;
    }
    public void setAccount_ID(int account_ID) {
        this.account_ID = account_ID;
    }
    public double getBalance() {
        return balance;
    }
    public void setBalance(double balance) {
        this.balance = balance;
    }
    public double getMinimum_balance() {
        return minimum_balance;
    }
    public void setMinimum_balance(double minimum_balance) {
        this.minimum_balance = minimum_balance;
    }
    public String getAccount_type() {
        return account_type;
    }
    public void setAccount_type(String account_type) {
        this.account_type = account_type;
    }
    void WithDrawMoeny(double M){

    }
    void DepositMoney(int M){

    }
    void Re_Activate(int M){
        if(is_dormant){
            if(M+getBalance()>=getMinimum_balance()){
                setBalance(getBalance()+M);
            }else{
                System.out.println("Please Enter Enough amount to Re-Activate the Account");
            }
        }else{
            System.out.println("Your Account is Not Dormant");
        }
    }
}

class Saving_Account extends Accounts{

    Saving_Account(){

    }
    @Override
    void DepositMoney(int M) {
        super.setBalance(getBalance() + M);
    }
    @Override
    void WithDrawMoeny(double M) {
        if(getBalance()<getMinimum_balance()){
            System.out.println("You don not have sufficient balance");
        }else{
            double money =M*0.01;
            super.setBalance(getBalance() - M - money);
            if(getBalance()<100){
                super.setIs_dormant(true);
            }
            System.out.println("WithDraw Successfully.....");
        }
    }

}
class Current_Account extends Accounts{
     private ArrayList<User>users;
    Current_Account(){
        users = new ArrayList<>();
    }

    @Override
    void DepositMoney(int M) {
        super.setBalance(getBalance() + M);
    }

    @Override
    void WithDrawMoeny(double M) {
        double service_charges=0;
        double Government_tex=0;
        if(getBalance()<getMinimum_balance()){
            System.out.println("You don not have sufficient balance");
        }else{

            if(M>5000){
                service_charges = M*0.002;
            }
            if(M>50000){
                Government_tex = M*0.025;
            }

            super.setBalance(getBalance() - (M + service_charges + Government_tex));
            if(getBalance()<100){
                super.setIs_dormant(true);
            }
            System.out.println("WithDraw Successfully");

        }
    }
}

class User{
    private String name;
    private String University_Id_Number;
    private String Address;
    private int number_of_Accounts;
    ArrayList<Accounts>accounts = new ArrayList<>();
    User(){
           number_of_Accounts = 0;
    }
    public User(String name, String university_Id_Number, String address) {
        this.name = name;
        University_Id_Number = university_Id_Number;
        Address = address;
        number_of_Accounts = 0;
        accounts = new ArrayList<>();
    }
    public ArrayList<Accounts> getAccounts() {
        return accounts;
    }
    public void setAccounts(Accounts A) {
        accounts.add(A);
    }
    public int getNumber_of_Accounts() {
        return number_of_Accounts;
    }
    public void setNumber_of_Accounts(int number_of_Accounts) {
        this.number_of_Accounts = number_of_Accounts;
    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public String getUniversity_Id_Number() {
        return University_Id_Number;
    }
    public void setUniversity_Id_Number(String university_Id_Number) {
        University_Id_Number = university_Id_Number;
    }
    public String getAddress() {
        return Address;
    }
    public void setAddress(String address) {
        Address = address;
    }
}

class Transaction_Ledger{
  private ArrayList<Accounts>accounts = new ArrayList<>();
  private ArrayList<Date>dates = new ArrayList<>();
  Transaction_Ledger(){
     dates = new ArrayList<>();
     accounts = new ArrayList<>();
  }
    public ArrayList<Date> getDates() {
        return dates;
    }
    public void setDates(ArrayList<Date> dates) {
        this.dates = dates;
    }
    public void setaccount(Accounts A){
      accounts.add(A);
    }
    public void setdate(Date d){
      dates.add(d);
    }
    public ArrayList<Accounts> getAccounts() {
        return accounts;
    }
    public void setAccounts(ArrayList<Accounts> accounts) {
        this.accounts = accounts;
    }
    void locate_Transaction(Accounts accounts1){
      Date date = new Date();
      dates.add(date);
      accounts.add(accounts1);
     }

}
class Statement{
    private Date fromDate;
    private Date toDate;
    private ArrayList<Transaction_Ledger> transactions;
    public Statement(Date fromDate, Date toDate) {
        this.fromDate = fromDate;
        this.toDate = toDate;
        this.transactions = new ArrayList<>();
    }
    public ArrayList<Transaction_Ledger> getTransactions() {
        return transactions;
    }
    public void setTransactions(ArrayList<Transaction_Ledger> transactions) {
        this.transactions = transactions;
    }
    public Date getFromDate() {
        return fromDate;
    }
    public void setFromDate(Date fromDate) {
        this.fromDate = fromDate;
    }
    public Date getToDate() {
        return toDate;
    }
    public void setToDate(Date toDate) {
        this.toDate = toDate;
    }
    void Account_Statement(Accounts accounts){
        int idx;
        System.out.println("Statement of Accounts form "+fromDate.toString()+" To "+toDate.toString());
        for(int i=0;i<transactions.size();i++){
            if(transactions.get(i).getAccounts().get(i).getAccount_Number().equals(accounts.getAccount_Number())){
                idx = i;
                System.out.println("Transaction on :"+transactions.get(i).getDates().get(i).toString());
                System.out.println("Balance :"+transactions.get(i).getAccounts().get(i).getBalance());
            }
            System.out.println("------------------------------------------------------------------------------------------");
        }
    }

}
class Bank{
   private String Bank_Name;
   private ArrayList<User>users = new ArrayList<>();
   private ArrayList<Accounts>accounts = new ArrayList<>();
   private ArrayList<Transaction_Ledger>transactionLedgers = new ArrayList<>();
   Bank(){
       users = new ArrayList<>();
       accounts = new ArrayList<>();
   }
    public Bank(String bank_Name, ArrayList<User> users, ArrayList<Accounts> accounts) {
        Bank_Name = bank_Name;
        this.users = users;
        this.accounts = accounts;
    }
    public String getBank_Name() {
        return Bank_Name;
    }
    public void setBank_Name(String bank_Name) {
        Bank_Name = bank_Name;
    }
    public ArrayList<User> getUsers() {
        return users;
    }
    public void setUsers(ArrayList<User> users) {
        this.users = users;
    }
    public ArrayList<Accounts> getAccounts() {
        return accounts;
    }
    public void setAccounts(ArrayList<Accounts> accounts) {
        this.accounts = accounts;
    }
    void OpenAccount(){
       Scanner input = new Scanner(System.in);
       String name,Uni_Id,Address,Account_number,Account_Type;
       int Account_ID;
       double Balance,minimum_Balance;
       int type;
      User U = new User();
      Accounts A;
        System.out.println("----------------------------------------------------------------");
        System.out.print("Enter Name of Customer:");
        name=input.nextLine();
        //System.out.print("Enter University ID of Customer:");
        //Uni_Id=input.nextLine();
        System.out.print("Enter Address of Customer:");
        Address=input.nextLine();
        System.out.println("---------------------------------");
        System.out.println("Enter Account Type:");
        System.out.println("1 - Current Account:");
        System.out.println("2 - Saving Account:");
        System.out.print("Enter:");
        type = input.nextInt();
        if(type==1){
            A = new Current_Account();
            A.setAccount_type("Current Account");
        }else{
            A = new Saving_Account();
            A.setAccount_type("Saving Account");
        }
        System.out.println("---------------------------------");
        System.out.print("Enter Account Number:");
        Account_number = input.next();
        System.out.print("Enter Balance:");
        Balance = input.nextDouble();
        while (Balance<100){
            System.out.print("Balance Should be More than 100\n Please Enter Balance Again:");
            Balance = input.nextDouble();
        }
        System.out.print("Enter Account ID:");
        Account_ID = input.nextInt();
        U.setName(name);
        U.setAddress(Address);
       // U.setUniversity_Id_Number(Uni_Id);
        U.setNumber_of_Accounts(U.getNumber_of_Accounts()+1);
        A.setAccount_Number(Account_number);
        A.setBalance(Balance);
        A.setAccount_ID(Account_ID);
        A.setMinimum_balance(100);
        A.setIs_dormant(false);
        U.setAccounts(A);
        users.add(U);
        accounts.add(A);


    }
    void Made_Transiction(String Number){

       for(int i = 0;i<accounts.size();i++)
       {
           if(accounts.get(i).getAccount_Number().equals(Number)){
               Transaction_Ledger L = new Transaction_Ledger();
               Date d = new Date();
               L.setaccount(accounts.get(i));
               L.setdate(d);
               transactionLedgers.add(L);
               System.out.println("Account Found....");
               System.out.println("----------------Transaction--------------------");
               System.out.println("1 - With Draw Money");
               System.out.println("2 - Deposit Money");
               int option;
               Scanner input = new Scanner(System.in);
               System.out.print("Enter option");
               option = input.nextInt();
               while(option<1 || option>2){
                   System.out.print("Please Enter Valid option");
                   option = input.nextInt();
               }

               if(option==1){
                   int opt;

                   System.out.println("Which Method Do You Want To Use:");
                   System.out.println("1 - Check Book:");
                   System.out.println("2 - Card:");
                   System.out.println("Enter Option:");
                   opt = input.nextInt();
                   while(opt>2 || opt<1){
                       System.out.println("Please Enter Valid Option");
                       opt = input.nextInt();
                   }

                           if(opt==1){
                               System.out.println("------WithDraw Using Check Book---------------");
                               int Money;
                               System.out.print("Enter Money to withdraw");
                               Money = input.nextInt();
                               accounts.get(i).WithDrawMoeny(Money);
                               //System.out.println("With draw Successfully Us....");
                               return;


                           }else{
                               System.out.println("------WithDraw Using Card---------------");
                               System.out.println("1 - Master Card ");
                               System.out.println("2 - Visa Card");
                               System.out.println("3 - Local Card");
                               int crd;
                               System.out.println("Enter Option:");
                               crd = input.nextInt();
                               while (crd>3 || crd<1){
                                   System.out.println("Enter Valid Option:");
                                   crd = input.nextInt();
                                   switch (crd) {
                                       case 1 -> {
                                           System.out.println("------------Master Card---------------");
                                           String str;
                                           System.out.println("Enter Card Number");
                                           str = input.next();
                                           while (str!="1234"){
                                               System.out.println("Your Card Number is Incorrect Please Enter Valid Card Number:");
                                               str = input.next();
                                           }
                                           Card card = new MasterCard(str);
                                           double interst = card.getInterestRate();
                                           int Money;
                                           System.out.print("Enter Money to withdraw");
                                           Money = input.nextInt();
                                           accounts.get(i).WithDrawMoeny(Money);
                                           //System.out.println("With draw Successfully Us....");
                                           return;

                                       }
                                       case 2 -> {

                                           System.out.println("------------Visa Card---------------");
                                           String str;
                                           System.out.println("Enter Card Number");
                                           str = input.next();
                                           while (str!="1234"){
                                               System.out.println("Your Card Number is Incorrect Please Enter Valid Card Number:");
                                               str = input.next();
                                           }
                                           Card card = new VisaCard(str);
                                           double interst = card.getInterestRate();
                                           int Money;
                                           System.out.print("Enter Money to withdraw");
                                           Money = input.nextInt();
                                           accounts.get(i).WithDrawMoeny(Money);
                                           //System.out.println("With draw Successfully Us....");
                                           return;
                                       }
                                       case 3 -> {
                                           System.out.println("----------Local Card--------------------");
                                           String str;
                                           System.out.println("Enter Card Number");
                                           str = input.next();
                                           while (str!="1234"){
                                               System.out.println("Your Card Number is Incorrect Please Enter Valid Card Number:");
                                               str = input.next();
                                           }
                                           Card card = new LocalCard(str);
                                           double interst = card.getInterestRate();
                                           int Money;
                                           System.out.print("Enter Money to withdraw");
                                           Money = input.nextInt();
                                           accounts.get(i).WithDrawMoeny(Money);
                                           //System.out.println("With draw Successfully Us....");
                                           return;
                                       }
                                   }
                               }

                           }


               }else{
                   int Money;
                   System.out.print("Enter Money to Deposit");
                   Money = input.nextInt();
                   accounts.get(i).DepositMoney(Money);
                   System.out.println("Deposited Successfully....");
                   return;
               }

           }
       }
        System.out.println("Sorry No such Account Founds");
       return;

    }
    void Transaction_Details(){
            for (int i = 0;i<transactionLedgers.size();i++){
                System.out.println("Account Type   :"+transactionLedgers.get(i).getAccounts().get(i).getAccount_type());
                System.out.println("Account Number :"+transactionLedgers.get(i).getAccounts().get(i).getAccount_Number());
                System.out.println("Account Balance :"+transactionLedgers.get(i).getAccounts().get(i).getBalance());
                System.out.println("Transaction Date:"+transactionLedgers.get(i).getDates().get(i).toString());
            }
        }
    void Remove_Account(String N){
       for(int i=0;i<accounts.size();i++){
           if(accounts.get(i).getAccount_Number().equals(N)) {
               accounts.remove(i);
               System.out.println("Removed Sucessfully");
               return;
           }
       }
        System.out.println("No Such Account Found");
    }
    void Customer_Details(){
        System.out.println("-----------Customers Details-------------");
       for (int i=0;i<users.size();i++){
           System.out.println("Name          :"+users.get(i).getName());
           System.out.println("Address       :"+users.get(i).getAddress());
           System.out.println("University id :"+users.get(i).getUniversity_Id_Number());
           System.out.println("No of Accounts:"+users.get(i).getNumber_of_Accounts());
       }

    }
    void Account_Details(){
        System.out.println("-----------Accounts Details-------------");
     for(int i=0;i<accounts.size();i++){
         System.out.println("Account Type                 :"+accounts.get(i).getAccount_type());
         System.out.println("Account Number               :"+accounts.get(i).getAccount_Number());
         System.out.println("Account ID                   :"+accounts.get(i).getAccount_ID());
         System.out.println("Account Balance              :"+accounts.get(i).getBalance());
         System.out.println("Account Minimum Balance limit:"+accounts.get(i).getMinimum_balance());

        }
    }

}

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        Bank bank = new Bank();
        int option;
        while (true) {
            System.out.println("---------------------Welcome to RIPHAH Banking System----------------------------");
            System.out.println("1...Login As Manager....");
            System.out.println("2...Login As Customer...");
            int opt2;
            System.out.println("Enter Option:");
            opt2 = input.nextInt();
            while (opt2>2 || opt2<1){
                System.out.println("Please Enter Valid option:");
                opt2 = input.nextInt();
            }
            if(opt2==1){
                System.out.println("__________________LogIn As Manager_____________________________");
                System.out.println("1 - Create Account");
                System.out.println("2 - Accounts Details");
                System.out.println("3 - Customer Details");
                System.out.println("6 - Remove Account");
                System.out.println("7 - Exit");
                System.out.println("---------------------------");
                System.out.print("Enter an Option:");
                option = input.nextInt();
                while(!(option==1 || option==2 || option==3 || option==6 || option==7)){
                    System.out.print("Please Enter Valid Option:");
                    option = input.nextInt();
                }


            }else{
                System.out.println("__________________LogIn As Customer_____________________________");
                System.out.println("4 - Transaction");
                System.out.println("5 - Statement");
                System.out.println("7 - Exit");
                System.out.println("---------------------------");
                System.out.print("Enter an Option:");
                option = input.nextInt();
                while(!(option==4 || option==5 || option==7)){
                    System.out.print("Please Enter Valid Option:");
                    option = input.nextInt();
                }
            }



            while (option < 1 || option > 7) {
                System.out.print("Please Enter Valid Option:");
                option = input.nextInt();
            }
            switch (option) {
                case 1 -> {
                    char ch;
                    bank.OpenAccount();
                    System.out.println("Account Created Successfully----");
                    System.out.print("Enter Any character to Continue");
                    ch = input.next().charAt(0);
                }
                case 2 -> {
                    char ch;
                    bank.Account_Details();
                    System.out.print("Enter Any character to Continue");
                    ch = input.next().charAt(0);
                }
                case 3 -> {
                    char ch;
                    bank.Customer_Details();
                    System.out.print("Enter Any character to Continue");
                    ch = input.next().charAt(0);
                }
                case 4 -> {
                    String number;
                    char ch;
                    System.out.print("Please Enter Account Number");
                    number = input.next();
                    bank.Made_Transiction(number);
                    System.out.print("Enter Any character to Continue");
                    ch = input.next().charAt(0);
                }
                case 5 -> {
                    char ch;
                    bank.Transaction_Details();
                    System.out.print("Enter Any character to Continue");
                    ch = input.next().charAt(0);
                }
                case 6 -> {
                    String number;
                    char ch;
                    System.out.print("Please Enter Account Number to Remove");
                    number = input.next();
                    bank.Remove_Account(number);
                    System.out.print("Enter Any character to Continue");
                    ch = input.next().charAt(0);
                }
                case 7 -> {
                    System.out.println("Thanks for using our Services");
                    return;
                }
            }

        }
    }
}
