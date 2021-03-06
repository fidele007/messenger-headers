/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNThreadMessageSubscribing.h>

@protocol MNAuthenticationManager, OS_dispatch_queue;
@class FBMThreadSharedMediaModelCacheListeningAnnouncer, FBMThreadBasedCacheManager, MNAppMessageAttachmentUtils, NSObject, NSString;

@interface FBMThreadSharedMediaModelCache : NSObject <FBViewerContextClassProvidable, MNThreadMessageSubscribing> {

	FBMThreadSharedMediaModelCacheListeningAnnouncer* _mediaModelsChangedAnnouncer;
	FBMThreadBasedCacheManager* _cacheManager;
	MNAppMessageAttachmentUtils* _appMessageAttachmentUtils;
	id<MNAuthenticationManager> _authManager;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)didApplyUpdates:(id)arg1 toMessageSet:(id)arg2 forOriginalMessageSet:(id)arg3 threadKey:(id)arg4 ;
-(void)didReplaceMessageSet:(id)arg1 withMessageSet:(id)arg2 forThreadKey:(id)arg3 ;
-(void)startWithQueue:(id)arg1 ;
-(void)addThreadSharedMediaModelCacheListener:(id)arg1 ;
-(void)removeThreadSharedMediaModelCacheListener:(id)arg1 ;
-(void)setSharedMediaModels:(id)arg1 forThreadWithKey:(id)arg2 ;
-(void)appendSharedMediaModels:(id)arg1 forThreadWithKey:(id)arg2 ;
-(id)sharedMediaModelsForThreadWithKey:(id)arg1 ;
-(void)prependSharedMediaModels:(id)arg1 forThreadWithKey:(id)arg2 ;
-(id)initWithThreadSummarySubscribingAnnouncer:(id)arg1 urlFormatter:(id)arg2 authManager:(id)arg3 ;
-(void)_updateSharedMediaModelsAndAnnounceIfNecessaryForThreadKey:(id)arg1 newSharedMediaModels:(id)arg2 oldSharedMediaModels:(id)arg3 ;
-(void)_deletePhotoViewModelWithKeys:(id)arg1 threadKey:(id)arg2 ;
-(void)stop;
@end

