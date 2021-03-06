//
//  CurrentPickup.h
//  TaxaApp
//
//  Created by keith.loughnane on 21/07/2011.
//  Copyright 2011 none. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface CurrentPickup : NSObject {
    	id owner;
    int pickupId;
    int pickupStatus; //-1 = nothing setup, 0= setup but not accepted or reqected waiting, 1= accepted. minus values other than -1 are errors.
    double llong, llat;
    double ETA;
}

-(int)initWithOwner : (id) owner;
-(int) setUpMasterModeID:(int)ID llong:(double)ilong llat:(double)ilat;
-(int) getStatus;
-(int) setStatus:(int)iStatus;
- (int) setUpClientModeID:(int)ID llong:(double)ilong llat:(double)ilat;
-(double)getLLong;
-(double)getLLat;
-(int)getID;
-(int) setAcceptedServerMode:(int) iStatus;
-(int) setAcceptedClientMode:(int) iStatus;
-(int) clear;

@end
