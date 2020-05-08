package rmi_crud.agenda;

import java.io.FileInputStream;

import rmi_crud.protobuf.AddressBookProtos.AddressBook;
import rmi_crud.protobuf.AddressBookProtos.Person;

class ListPeople {
  // Iterates though all people in the AddressBook and prints info about them.
  static void Print(AddressBook addressBook) {
	
    for (Person person: addressBook.getPeopleList()) {
      System.out.println("Person ID: " + person.getId());
      System.out.println("  Name: " + person.getName());
      if (!person.getEmail().isEmpty()) {
        System.out.println("  E-mail address: " + person.getEmail());
      }
      if (!person.getEndereco().isEmpty()) {
          System.out.println("  Endereco: " + person.getEndereco());
      }

      for (Person.PhoneNumber phoneNumber : person.getPhonesList()) {
        switch (phoneNumber.getType()) {
          case MOBILE:
            System.out.print("  Mobile phone #: ");
            break;
          case HOME:
            System.out.print("  Home phone #: ");
            break;
          case WORK:
            System.out.print("  Work phone #: ");
            break;
          default:
            System.out.println(" Unknown phone #: ");
            break;
        }
        System.out.println(phoneNumber.getNumber());
      }
    }
  }

  // Main function:  Reads the entire address book from a file and prints all
  //   the information inside.
  public static void main(String[] args) throws Exception {

    // Read the existing address book.
    AddressBook addressBook =
      AddressBook.parseFrom(new FileInputStream("./file.data"));

    Print(addressBook);
  }
}
