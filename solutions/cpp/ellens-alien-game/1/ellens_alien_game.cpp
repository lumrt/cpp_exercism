namespace targets {
// TODO: Insert the code for the alien class here
class Alien{
    public:
        int x_coordinate;
        int y_coordinate;
    
        Alien(int x, int y){
            x_coordinate = x;
            y_coordinate = y;
        }

        int get_health(){
            return health;
        }
    
        bool hit(){
            health -= 1;
            if (health < 0)
                health = 0;
            return true;
        }

        bool is_alive(){
            if (health == 0)
                return false;
            return true;
        }

        bool teleport(int x, int y){
            x_coordinate = x;
            y_coordinate = y;
            return true;
        }

        bool collision_detection(Alien alien){
            if (alien.x_coordinate == x_coordinate && alien.y_coordinate == y_coordinate)
                return true;
            else
                return false;
        }
    private:
        int health = 3;
};
}  // namespace targets
