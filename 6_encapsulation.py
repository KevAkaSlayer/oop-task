class Bank:
    def __init__(self,holder_name,initial_balance):
        self.holder_name = holder_name
        self.__balance = initial_balance # This is a private attribute  
        self._branch = "Dhanmondi" # This is a protected attribute

    def deposit(self,amount):
        self.__balance += amount
        print(f"Deposited {amount} into {self.holder_name}'s account")
    
    def get_balance(self):
        return self.__balance


rafsan = Bank("Rafsan",1000)
rafsan.holder_name = "Rafsanul Haque"
rafsan.deposit(500)

print(rafsan.get_balance())

# print(rafsan.__balance) # This will give an error
print(rafsan._branch) # This will not give an error
print(rafsan._Bank__balance) # This will not give an error