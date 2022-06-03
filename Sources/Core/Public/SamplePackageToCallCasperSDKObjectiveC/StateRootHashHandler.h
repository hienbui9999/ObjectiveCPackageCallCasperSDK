#import <Foundation/Foundation.h>
@interface StateRootHashHandler:NSObject
@property NSString * stateRootHash;
-(void) getStateRootHashWithCallID:(NSString*) callID;
@end
