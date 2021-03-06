/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:38 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBUFIReactionsSelectionState : NSObject {

	BOOL _selectionActive;
	BOOL _pendingCancellation;
	BOOL _persisted;

}

@property (nonatomic,readonly) BOOL selectionActive;                  //@synthesize selectionActive=_selectionActive - In the implementation block
@property (nonatomic,readonly) BOOL pendingCancellation;              //@synthesize pendingCancellation=_pendingCancellation - In the implementation block
@property (nonatomic,readonly) BOOL persisted;                        //@synthesize persisted=_persisted - In the implementation block
+(id)inactiveWithPendingCancellation:(BOOL)arg1 ;
+(id)activeWithPendingCancellation:(BOOL)arg1 persisted:(BOOL)arg2 ;
-(BOOL)selectionActive;
-(id)initWithSelectionActive:(BOOL)arg1 pendingCancellation:(BOOL)arg2 persisted:(BOOL)arg3 ;
-(BOOL)pendingCancellation;
-(BOOL)persisted;
@end

