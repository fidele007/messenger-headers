/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMThreadSummary, MNIndexedAppMessageSet, MNThreadViewDataBackingSource, FBMIndexedUserSet, MNThreadParticipantNameTitleInfo, NSDictionary, MNThreadContextViewModel, MNPageResponsivenessViewModel, MNMessagesNuxConfiguration, MNThreadReadMark, MNSecureThreadExistenceInfo, MNEphemeralMessageStatusCollection, UIColor, MNThreadCollaborativeFlowObjectMap, NSArray;

@interface MNThreadViewModel : FBValueObject <NSCopying> {

	BOOL _shouldShowNullState;
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
	MNThreadCollaborativeFlowObjectMap* _collaborativeFlowObjectMap;
	NSArray* _botMenuCTAs;

}

@property (nonatomic,copy,readonly) FBMThreadSummary * summary;                                                         //@synthesize summary=_summary - In the implementation block
@property (nonatomic,copy,readonly) MNIndexedAppMessageSet * messages;                                                  //@synthesize messages=_messages - In the implementation block
@property (nonatomic,copy,readonly) MNThreadViewDataBackingSource * backingSource;                                      //@synthesize backingSource=_backingSource - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowNullState;                                                                //@synthesize shouldShowNullState=_shouldShowNullState - In the implementation block
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
@property (nonatomic,copy,readonly) MNThreadCollaborativeFlowObjectMap * collaborativeFlowObjectMap;                    //@synthesize collaborativeFlowObjectMap=_collaborativeFlowObjectMap - In the implementation block
@property (nonatomic,copy,readonly) NSArray * botMenuCTAs;                                                              //@synthesize botMenuCTAs=_botMenuCTAs - In the implementation block
-(id)myID;
-(BOOL)isBot;
-(MNThreadReadMark *)readMark;
-(BOOL)shouldShowNullState;
-(MNEphemeralMessageStatusCollection *)ephemeralMessageStatusCollection;
-(NSDictionary *)attributionSupplementaryInfo;
-(MNThreadCollaborativeFlowObjectMap *)collaborativeFlowObjectMap;
-(MNThreadContextViewModel *)threadContextViewModel;
-(MNMessagesNuxConfiguration *)welcomeNuxViewModel;
-(MNThreadViewDataBackingSource *)backingSource;
-(MNSecureThreadExistenceInfo *)secureThreadExistenceInfo;
-(MNThreadParticipantNameTitleInfo *)participantNameTitleInfo;
-(id)mn_conciseDescription;
-(NSArray *)botMenuCTAs;
-(id)initWithSummary:(id)arg1 messages:(id)arg2 backingSource:(id)arg3 shouldShowNullState:(BOOL)arg4 users:(id)arg5 participantNameTitleInfo:(id)arg6 attributionSupplementaryInfo:(id)arg7 threadContextViewModel:(id)arg8 pageResponsivenessViewModel:(id)arg9 welcomeNuxViewModel:(id)arg10 readMark:(id)arg11 secureThreadExistenceInfo:(id)arg12 ephemeralMessageStatusCollection:(id)arg13 themeColor:(id)arg14 collaborativeFlowObjectMap:(id)arg15 botMenuCTAs:(id)arg16 ;
-(MNPageResponsivenessViewModel *)pageResponsivenessViewModel;
-(FBMThreadSummary *)summary;
-(UIColor *)themeColor;
-(MNIndexedAppMessageSet *)messages;
-(FBMIndexedUserSet *)users;
@end

