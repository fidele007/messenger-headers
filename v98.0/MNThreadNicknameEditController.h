/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

@protocol FBProvider, MNThreadNicknameEditControllerDelegate;
@class MNThreadUpdateRunningService, FBMSyncedThreadKey, NSString;

@interface MNThreadNicknameEditController : NSObject <FBClassProvidable> {

	id<FBProvider> _threadCustomizationUpdateRunnerProvider;
	MNThreadUpdateRunningService* _threadSummaryUpdateService;
	FBMSyncedThreadKey* _threadKey;
	unsigned long long _source;
	NSString* _participantID;
	id<MNThreadNicknameEditControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNThreadNicknameEditControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)displayAlertForThreadKey:(id)arg1 participantID:(id)arg2 participantFullName:(id)arg3 participantCurrentNickname:(id)arg4 isGroupThread:(BOOL)arg5 otherParticipantName:(id)arg6 source:(unsigned long long)arg7 ;
-(id)initWithThreadSummaryUpdateService:(id)arg1 ;
-(void)_setNickname:(id)arg1 ;
-(void)setDelegate:(id<MNThreadNicknameEditControllerDelegate>)arg1 ;
-(id<MNThreadNicknameEditControllerDelegate>)delegate;
@end

