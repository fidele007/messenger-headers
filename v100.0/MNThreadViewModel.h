/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMThreadSummary, MNIndexedAppMessageSet, MNThreadViewDataBackingSource, FBMIndexedUserSet, MNThreadParticipantNameTitleInfo, NSDictionary, MNThreadContextViewModel, MNPageResponsivenessViewModel, MNMessagesNuxConfiguration, MNThreadReadMark, MNSecureThreadExistenceInfo, MNEphemeralMessageStatusCollection, UIColor;

@interface MNThreadViewModel : FBValueObject <NSCopying> {

	BOOL _isThreadCompletelyLoaded;
	FBMThreadSummary* _summary;
	MNIndexedAppMessageSet* _messages;
	MNThreadViewDataBackingSource* _backingSource;
	FBMIndexedUserSet* _users;
	MNThreadParticipantNameTitleInfo* _participantNameTitleInfo;
	NSDictionary* _attributionSupplementaryInfo;
	MNThreadContextViewModel* _threadContextViewModel;
	MNPageResponsivenessViewModel* _pageResponsivenessViewModel;
	MNMessagesNuxConfiguration* _welcomeNuxViewModel;
	MNThreadReadMark* _readMark;
	MNSecureThreadExistenceInfo* _secureThreadExistenceInfo;
	MNEphemeralMessageStatusCollection* _ephemeralMessageStatusCollection;
	UIColor* _themeColor;

}

@property (nonatomic,copy,readonly) FBMThreadSummary * summary;                                                         //@synthesize summary=_summary - In the implementation block
@property (nonatomic,copy,readonly) MNIndexedAppMessageSet * messages;                                                  //@synthesize messages=_messages - In the implementation block
@property (nonatomic,copy,readonly) MNThreadViewDataBackingSource * backingSource;                                      //@synthesize backingSource=_backingSource - In the implementation block
@property (nonatomic,readonly) BOOL isThreadCompletelyLoaded;                                                           //@synthesize isThreadCompletelyLoaded=_isThreadCompletelyLoaded - In the implementation block
@property (nonatomic,copy,readonly) FBMIndexedUserSet * users;                                                          //@synthesize users=_users - In the implementation block
@property (nonatomic,copy,readonly) MNThreadParticipantNameTitleInfo * participantNameTitleInfo;                        //@synthesize participantNameTitleInfo=_participantNameTitleInfo - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * attributionSupplementaryInfo;                                        //@synthesize attributionSupplementaryInfo=_attributionSupplementaryInfo - In the implementation block
@property (nonatomic,copy,readonly) MNThreadContextViewModel * threadContextViewModel;                                  //@synthesize threadContextViewModel=_threadContextViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNPageResponsivenessViewModel * pageResponsivenessViewModel;                        //@synthesize pageResponsivenessViewModel=_pageResponsivenessViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNMessagesNuxConfiguration * welcomeNuxViewModel;                                   //@synthesize welcomeNuxViewModel=_welcomeNuxViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNThreadReadMark * readMark;                                                        //@synthesize readMark=_readMark - In the implementation block
@property (nonatomic,copy,readonly) MNSecureThreadExistenceInfo * secureThreadExistenceInfo;                            //@synthesize secureThreadExistenceInfo=_secureThreadExistenceInfo - In the implementation block
@property (nonatomic,copy,readonly) MNEphemeralMessageStatusCollection * ephemeralMessageStatusCollection;              //@synthesize ephemeralMessageStatusCollection=_ephemeralMessageStatusCollection - In the implementation block
@property (nonatomic,copy,readonly) UIColor * themeColor;                                                               //@synthesize themeColor=_themeColor - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(id)myID;
-(BOOL)isBot;
-(MNThreadReadMark *)readMark;
-(UIColor *)themeColor;
-(BOOL)isThreadCompletelyLoaded;
-(MNEphemeralMessageStatusCollection *)ephemeralMessageStatusCollection;
-(NSDictionary *)attributionSupplementaryInfo;
-(MNThreadContextViewModel *)threadContextViewModel;
-(MNPageResponsivenessViewModel *)pageResponsivenessViewModel;
-(MNMessagesNuxConfiguration *)welcomeNuxViewModel;
-(MNSecureThreadExistenceInfo *)secureThreadExistenceInfo;
-(MNThreadParticipantNameTitleInfo *)participantNameTitleInfo;
-(id)mn_conciseDescription;
-(MNThreadViewDataBackingSource *)backingSource;
-(id)initWithSummary:(id)arg1 messages:(id)arg2 backingSource:(id)arg3 isThreadCompletelyLoaded:(BOOL)arg4 users:(id)arg5 participantNameTitleInfo:(id)arg6 attributionSupplementaryInfo:(id)arg7 threadContextViewModel:(id)arg8 pageResponsivenessViewModel:(id)arg9 welcomeNuxViewModel:(id)arg10 readMark:(id)arg11 secureThreadExistenceInfo:(id)arg12 ephemeralMessageStatusCollection:(id)arg13 themeColor:(id)arg14 ;
-(FBMThreadSummary *)summary;
-(MNIndexedAppMessageSet *)messages;
-(FBMIndexedUserSet *)users;
@end

