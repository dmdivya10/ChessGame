public class Pawn extends Piece {
    public Pawn(boolean white)
    {
        super(white);
    }

    @Override
    public boolean canMove(Board board, Spot start,
                                            Spot end)
    {
        // we can't move the piece to a spot that has
        // a piece of the same colour
        if (end.getPiece().isWhite() == this.isWhite()) {
            return false;
        }
      bool check = false;
	  //while killing the piece of another color pawn can move diagonally forward
  	  if (end.getPiece().isWhite() != this.isWhite()) {
            int x = Math.abs(start.getX() - end.getX());
        	int y = Math.abs(start.getY() - end.getY());
        	check = x * y == 1;
        }
      //pawn normally moves one step forward directly
	  else
	 {
        int x = Math.abs(start.getX() - end.getX());
        int y = Math.abs(start.getY() - end.getY());
        check =  x * y == 0;
       }
	Return check;
    }
}
