import java.util.ArrayList;

public class PersonStore implements Cloneable {
    private ArrayList<Person> store = new ArrayList<>();

    public boolean add(Person p) {
        return store.add(p);
    }

    public Person get(int i) {
        return store.get(i);
    }

    public boolean remove(Person p) {
        return store.remove(p);
    }

    // Deep Cloning
    @Override
    public Object clone() {
        PersonStore clonedStore = new PersonStore();
        for (Person person : store) {
            try {
                clonedStore.add((Person) person.clone());
            } catch (CloneNotSupportedException e) {
                e.printStackTrace();
            }
        }
        return clonedStore;
    }

    // Main μέθοδος για δοκιμή
    public static void main(String[] args) {
        PersonStore originalStore = new PersonStore();
        originalStore.add(new Person("Ioannis", "Argyropoulos"));

        // Δοκιμή deep cloning
        PersonStore clonedStore = (PersonStore) originalStore.clone();

        // Δοκιμή εάν η αλλαγή στο αντικείμενο που βρίσκεται στον αρχικό αποθήκευτικό
        // χώρο δεν επηρεάζει το κλωνοποιημένο αντικείμενο
        originalStore.get(0).setFirstName("Giannis");
        originalStore.get(0).setLastName("Argiropoulos");

        // Εκτύπωση των αρχικών και των κλωνοποιημένων δεδομένων για επιβεβαίωση
        System.out.println("Original Store:");
        for (int i = 0; i < originalStore.store.size(); i++) {
            System.out.println(originalStore.get(i).getFirstName() + " " + originalStore.get(i).getLastName());
        }

        System.out.println("\nCloned Store:");
        for (int i = 0; i < clonedStore.store.size(); i++) {
            System.out.println(clonedStore.get(i).getFirstName() + " " + clonedStore.get(i).getLastName());
        }
    }
}
