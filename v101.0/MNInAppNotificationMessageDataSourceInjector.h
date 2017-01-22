/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInjecting.h>

@class FBProviderMapData, MNThreadImageManager, MNProfileImageViewController, MNThreadSnippetGenerator, MNThreadParticipantNameFormatter, FBEmoticonTranslator, NSString;

@interface MNInAppNotificationMessageDataSourceInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	MNThreadImageManager* _threadImageManager;
	MNProfileImageViewController* _profileImageViewController;
	MNThreadSnippetGenerator* _threadSnippetGenerator;
	MNThreadParticipantNameFormatter* _nameFormatter;
	FBEmoticonTranslator* _emoticonTranslator;

}

@property (nonatomic,readonly) MNThreadImageManager * threadImageManager;                              //@synthesize threadImageManager=_threadImageManager - In the implementation block
@property (nonatomic,readonly) MNProfileImageViewController * profileImageViewController;              //@synthesize profileImageViewController=_profileImageViewController - In the implementation block
@property (nonatomic,readonly) MNThreadSnippetGenerator * threadSnippetGenerator;                      //@synthesize threadSnippetGenerator=_threadSnippetGenerator - In the implementation block
@property (nonatomic,readonly) MNThreadParticipantNameFormatter * nameFormatter;                       //@synthesize nameFormatter=_nameFormatter - In the implementation block
@property (nonatomic,readonly) FBEmoticonTranslator * emoticonTranslator;                              //@synthesize emoticonTranslator=_emoticonTranslator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(MNProfileImageViewController *)profileImageViewController;
-(MNThreadImageManager *)threadImageManager;
-(FBEmoticonTranslator *)emoticonTranslator;
-(MNThreadSnippetGenerator *)threadSnippetGenerator;
-(MNThreadParticipantNameFormatter *)nameFormatter;
@end
