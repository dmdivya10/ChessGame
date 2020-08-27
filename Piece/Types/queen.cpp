public class Queen extends Piece { 
    public Queen(boolean white) 
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
        // checking diagoal move of queen
        if(Math.abs(start.getX()- end.getX())== Math.abs(start.getY() - end.getY()))
        {
            return true; 
        }
        // checking horizontal or vertical move of queen
	    else if(start.getX()==end.getX()||start.getY() == end.getY()
        {
            return true; 
        }
       return false;
    } 
}
