/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSString, MNUserStore, FBMUser;

@interface MNPaymentsUserFetchOperation : NSOperation {

	NSString* _userId;
	MNUserStore* _userStore;
	FBMUser* _fetchedUser;
	BOOL _finished;
	BOOL _executing;

}
-(id)initWithUserId:(id)arg1 userStore:(id)arg2 ;
-(id)fetchedUser;
-(BOOL)isAsynchronous;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
@end
