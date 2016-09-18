/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNThreadClientSummaryUpdateCreating;
@class FBMThreadKey, MNUserBlockStatusUpdateAction, UIView;

@interface MNThreadActionPanelActionConfiguration : NSObject {

	BOOL _isMuted;
	unsigned long long _action;
	FBMThreadKey* _threadKey;
	MNUserBlockStatusUpdateAction* _participantBlockAction;
	id<MNThreadClientSummaryUpdateCreating> _updateCreator;
	UIView* _sourceView;

}

@property (nonatomic,readonly) unsigned long long action;                                                //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) BOOL isMuted;                                                             //@synthesize isMuted=_isMuted - In the implementation block
@property (nonatomic,copy,readonly) FBMThreadKey * threadKey;                                            //@synthesize threadKey=_threadKey - In the implementation block
@property (nonatomic,copy,readonly) MNUserBlockStatusUpdateAction * participantBlockAction;              //@synthesize participantBlockAction=_participantBlockAction - In the implementation block
@property (nonatomic,readonly) id<MNThreadClientSummaryUpdateCreating> updateCreator;                    //@synthesize updateCreator=_updateCreator - In the implementation block
@property (nonatomic,__weak,readonly) UIView * sourceView;                                               //@synthesize sourceView=_sourceView - In the implementation block
-(id)initWithAction:(unsigned long long)arg1 threadKey:(id)arg2 isMuted:(BOOL)arg3 updateCreator:(id)arg4 participantBlockAction:(id)arg5 sourceView:(id)arg6 ;
-(MNUserBlockStatusUpdateAction *)participantBlockAction;
-(id<MNThreadClientSummaryUpdateCreating>)updateCreator;
-(unsigned long long)action;
-(UIView *)sourceView;
-(FBMThreadKey *)threadKey;
-(BOOL)isMuted;
@end
