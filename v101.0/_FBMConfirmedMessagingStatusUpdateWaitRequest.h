/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNConfirmedMessagingStatusUpdate;

@interface _FBMConfirmedMessagingStatusUpdateWaitRequest : NSObject {

	MNConfirmedMessagingStatusUpdate* _update;
	/*^block*/id _completion;

}

@property (nonatomic,copy) MNConfirmedMessagingStatusUpdate * update;              //@synthesize update=_update - In the implementation block
@property (nonatomic,copy) id completion;                                          //@synthesize completion=_completion - In the implementation block
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(MNConfirmedMessagingStatusUpdate *)update;
-(void)setUpdate:(MNConfirmedMessagingStatusUpdate *)arg1 ;
@end
