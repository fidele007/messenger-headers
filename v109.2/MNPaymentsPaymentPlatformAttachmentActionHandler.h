/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:37 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBIntentHandler;
@class NSString;

@interface MNPaymentsPaymentPlatformAttachmentActionHandler : NSObject {

	id<FBIntentHandler> _intentHandler;
	NSString* _actorID;

}
-(id)initWithActorID:(id)arg1 intentHandler:(id)arg2 ;
-(void)handleActionWithActionType:(unsigned long long)arg1 actionDetail:(id)arg2 ;
@end

