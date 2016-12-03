/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCancelable.h>

@protocol FBCancelable;
@interface FBAnnouncedCancelHandle : NSObject <FBCancelable> {

	id<FBCancelable> _cancelable;
	/*^block*/id _block;

}
-(id)initWithCancelable:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)cancel;
@end

