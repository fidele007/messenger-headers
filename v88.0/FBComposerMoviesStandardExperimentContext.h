/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:55 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>
#import <Messenger/FBComposerMoviesExperimentContext.h>

@class NSString;

@interface FBComposerMoviesStandardExperimentContext : FBExperimentContext <FBComposerMoviesExperimentContext> {

	BOOL _enabled;
	BOOL _shouldShowInlineMovieSprout;
	BOOL _evergreenPromptsEnabled;
	BOOL _holidayProductionPromptsEnabled;
	BOOL _shouldShowPromptTitle;
	BOOL _shouldEnableFormatSelectorEntrance;
	BOOL _canSeeBottomCTA;
	BOOL _shouldUseOptimisticPosting;
	BOOL _shouldPreUploadImagesInEditorView;
	BOOL _audioMixEnabled;
	BOOL _shouldShuffleMood;
	BOOL _shouldAutoPickPhotosWhenNoSuggestion;
	BOOL _shouldShowEditButtonInTheComposer;
	BOOL _shouldShowCategoryButton;
	BOOL _shouldSkipImagePicker;
	BOOL _shouldInvalidateSuggestionOnUnsuccessfulPosting;
	BOOL _shouldAllowImageCropping;
	BOOL _shouldSkipEditorForPrompt;
	BOOL _shouldShowCloseButtonOnComposerComponents;
	BOOL _shouldShowMusicCTA;
	BOOL _shouldShowMusicAttributionInPrompt;
	BOOL _shouldUseTabNameTheme;
	BOOL _topicSuggestionEnabled;
	BOOL _shouldPreDownloadAssets;
	BOOL _shouldRespectMuteButton;
	BOOL _shouldHideShareButton;
	BOOL _shouldUseRenderAudio;
	unsigned long long _minimumPhotoCountPerMovie;
	unsigned long long _maximumPhotoCountPerMovie;
	unsigned long long _imageMaximumCountForPreview;
	NSString* _blacklistedMoodIDs;
	unsigned long long _maximumPhotoCountInBlurredPrompt;
	NSString* _defaultMoodID;
	NSString* _promptSubtitle;
	NSString* _promptButtonText;
	unsigned long long _videoLengthThreshold;
	unsigned long long _maximumCutsPerVideo;
	unsigned long long _moodsCacheVersion;
	NSString* _firstMoodsIDs;
	NSString* _promptMoodsIDs;
	NSString* _moodIDToUseInThePicker;
	unsigned long long _popularMoodsCount;
	unsigned long long _maxNumberOfSuggestionsUsedToFillEditor;
	NSString* _nightoutMoodId;
	NSString* _weekendMoodId;
	unsigned long long _textureDimension;
	unsigned long long _promptTextureDimension;

}

@property (nonatomic,readonly) BOOL enabled;                                                           //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowInlineMovieSprout;                                       //@synthesize shouldShowInlineMovieSprout=_shouldShowInlineMovieSprout - In the implementation block
@property (nonatomic,readonly) unsigned long long minimumPhotoCountPerMovie;                           //@synthesize minimumPhotoCountPerMovie=_minimumPhotoCountPerMovie - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumPhotoCountPerMovie;                           //@synthesize maximumPhotoCountPerMovie=_maximumPhotoCountPerMovie - In the implementation block
@property (nonatomic,readonly) unsigned long long imageMaximumCountForPreview;                         //@synthesize imageMaximumCountForPreview=_imageMaximumCountForPreview - In the implementation block
@property (nonatomic,copy,readonly) NSString * blacklistedMoodIDs;                                     //@synthesize blacklistedMoodIDs=_blacklistedMoodIDs - In the implementation block
@property (nonatomic,readonly) BOOL evergreenPromptsEnabled;                                           //@synthesize evergreenPromptsEnabled=_evergreenPromptsEnabled - In the implementation block
@property (nonatomic,readonly) BOOL holidayProductionPromptsEnabled;                                   //@synthesize holidayProductionPromptsEnabled=_holidayProductionPromptsEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumPhotoCountInBlurredPrompt;                    //@synthesize maximumPhotoCountInBlurredPrompt=_maximumPhotoCountInBlurredPrompt - In the implementation block
@property (nonatomic,copy,readonly) NSString * defaultMoodID;                                          //@synthesize defaultMoodID=_defaultMoodID - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowPromptTitle;                                             //@synthesize shouldShowPromptTitle=_shouldShowPromptTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * promptSubtitle;                                         //@synthesize promptSubtitle=_promptSubtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * promptButtonText;                                       //@synthesize promptButtonText=_promptButtonText - In the implementation block
@property (nonatomic,readonly) BOOL shouldEnableFormatSelectorEntrance;                                //@synthesize shouldEnableFormatSelectorEntrance=_shouldEnableFormatSelectorEntrance - In the implementation block
@property (nonatomic,readonly) BOOL canSeeBottomCTA;                                                   //@synthesize canSeeBottomCTA=_canSeeBottomCTA - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseOptimisticPosting;                                        //@synthesize shouldUseOptimisticPosting=_shouldUseOptimisticPosting - In the implementation block
@property (nonatomic,readonly) BOOL shouldPreUploadImagesInEditorView;                                 //@synthesize shouldPreUploadImagesInEditorView=_shouldPreUploadImagesInEditorView - In the implementation block
@property (nonatomic,readonly) unsigned long long videoLengthThreshold;                                //@synthesize videoLengthThreshold=_videoLengthThreshold - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumCutsPerVideo;                                 //@synthesize maximumCutsPerVideo=_maximumCutsPerVideo - In the implementation block
@property (nonatomic,readonly) BOOL audioMixEnabled;                                                   //@synthesize audioMixEnabled=_audioMixEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long moodsCacheVersion;                                   //@synthesize moodsCacheVersion=_moodsCacheVersion - In the implementation block
@property (nonatomic,readonly) BOOL shouldShuffleMood;                                                 //@synthesize shouldShuffleMood=_shouldShuffleMood - In the implementation block
@property (nonatomic,copy,readonly) NSString * firstMoodsIDs;                                          //@synthesize firstMoodsIDs=_firstMoodsIDs - In the implementation block
@property (nonatomic,copy,readonly) NSString * promptMoodsIDs;                                         //@synthesize promptMoodsIDs=_promptMoodsIDs - In the implementation block
@property (nonatomic,readonly) BOOL shouldAutoPickPhotosWhenNoSuggestion;                              //@synthesize shouldAutoPickPhotosWhenNoSuggestion=_shouldAutoPickPhotosWhenNoSuggestion - In the implementation block
@property (nonatomic,copy,readonly) NSString * moodIDToUseInThePicker;                                 //@synthesize moodIDToUseInThePicker=_moodIDToUseInThePicker - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowEditButtonInTheComposer;                                 //@synthesize shouldShowEditButtonInTheComposer=_shouldShowEditButtonInTheComposer - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowCategoryButton;                                          //@synthesize shouldShowCategoryButton=_shouldShowCategoryButton - In the implementation block
@property (nonatomic,readonly) unsigned long long popularMoodsCount;                                   //@synthesize popularMoodsCount=_popularMoodsCount - In the implementation block
@property (nonatomic,readonly) BOOL shouldSkipImagePicker;                                             //@synthesize shouldSkipImagePicker=_shouldSkipImagePicker - In the implementation block
@property (nonatomic,readonly) BOOL shouldInvalidateSuggestionOnUnsuccessfulPosting;                   //@synthesize shouldInvalidateSuggestionOnUnsuccessfulPosting=_shouldInvalidateSuggestionOnUnsuccessfulPosting - In the implementation block
@property (nonatomic,readonly) BOOL shouldAllowImageCropping;                                          //@synthesize shouldAllowImageCropping=_shouldAllowImageCropping - In the implementation block
@property (nonatomic,readonly) unsigned long long maxNumberOfSuggestionsUsedToFillEditor;              //@synthesize maxNumberOfSuggestionsUsedToFillEditor=_maxNumberOfSuggestionsUsedToFillEditor - In the implementation block
@property (nonatomic,readonly) BOOL shouldSkipEditorForPrompt;                                         //@synthesize shouldSkipEditorForPrompt=_shouldSkipEditorForPrompt - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowCloseButtonOnComposerComponents;                         //@synthesize shouldShowCloseButtonOnComposerComponents=_shouldShowCloseButtonOnComposerComponents - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowMusicCTA;                                                //@synthesize shouldShowMusicCTA=_shouldShowMusicCTA - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowMusicAttributionInPrompt;                                //@synthesize shouldShowMusicAttributionInPrompt=_shouldShowMusicAttributionInPrompt - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseTabNameTheme;                                             //@synthesize shouldUseTabNameTheme=_shouldUseTabNameTheme - In the implementation block
@property (nonatomic,readonly) BOOL topicSuggestionEnabled;                                            //@synthesize topicSuggestionEnabled=_topicSuggestionEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSString * nightoutMoodId;                                         //@synthesize nightoutMoodId=_nightoutMoodId - In the implementation block
@property (nonatomic,copy,readonly) NSString * weekendMoodId;                                          //@synthesize weekendMoodId=_weekendMoodId - In the implementation block
@property (nonatomic,readonly) BOOL shouldPreDownloadAssets;                                           //@synthesize shouldPreDownloadAssets=_shouldPreDownloadAssets - In the implementation block
@property (nonatomic,readonly) BOOL shouldRespectMuteButton;                                           //@synthesize shouldRespectMuteButton=_shouldRespectMuteButton - In the implementation block
@property (nonatomic,readonly) BOOL shouldHideShareButton;                                             //@synthesize shouldHideShareButton=_shouldHideShareButton - In the implementation block
@property (nonatomic,readonly) unsigned long long textureDimension;                                    //@synthesize textureDimension=_textureDimension - In the implementation block
@property (nonatomic,readonly) unsigned long long promptTextureDimension;                              //@synthesize promptTextureDimension=_promptTextureDimension - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseRenderAudio;                                              //@synthesize shouldUseRenderAudio=_shouldUseRenderAudio - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)universeName;
+(id)parameterConfigurations;
-(NSString *)defaultMoodID;
-(NSString *)promptSubtitle;
-(unsigned long long)minimumPhotoCountPerMovie;
-(unsigned long long)maximumPhotoCountPerMovie;
-(NSString *)moodIDToUseInThePicker;
-(unsigned long long)maximumCutsPerVideo;
-(unsigned long long)imageMaximumCountForPreview;
-(BOOL)topicSuggestionEnabled;
-(BOOL)shouldShowInlineMovieSprout;
-(NSString *)blacklistedMoodIDs;
-(BOOL)evergreenPromptsEnabled;
-(BOOL)holidayProductionPromptsEnabled;
-(unsigned long long)maximumPhotoCountInBlurredPrompt;
-(BOOL)shouldShowPromptTitle;
-(NSString *)promptButtonText;
-(BOOL)shouldEnableFormatSelectorEntrance;
-(BOOL)canSeeBottomCTA;
-(BOOL)shouldUseOptimisticPosting;
-(BOOL)shouldPreUploadImagesInEditorView;
-(unsigned long long)videoLengthThreshold;
-(BOOL)audioMixEnabled;
-(unsigned long long)moodsCacheVersion;
-(BOOL)shouldShuffleMood;
-(NSString *)firstMoodsIDs;
-(NSString *)promptMoodsIDs;
-(BOOL)shouldAutoPickPhotosWhenNoSuggestion;
-(BOOL)shouldShowEditButtonInTheComposer;
-(BOOL)shouldShowCategoryButton;
-(unsigned long long)popularMoodsCount;
-(BOOL)shouldSkipImagePicker;
-(BOOL)shouldInvalidateSuggestionOnUnsuccessfulPosting;
-(BOOL)shouldAllowImageCropping;
-(unsigned long long)maxNumberOfSuggestionsUsedToFillEditor;
-(BOOL)shouldSkipEditorForPrompt;
-(BOOL)shouldShowCloseButtonOnComposerComponents;
-(BOOL)shouldShowMusicCTA;
-(BOOL)shouldShowMusicAttributionInPrompt;
-(BOOL)shouldUseTabNameTheme;
-(NSString *)nightoutMoodId;
-(NSString *)weekendMoodId;
-(BOOL)shouldPreDownloadAssets;
-(BOOL)shouldRespectMuteButton;
-(BOOL)shouldHideShareButton;
-(unsigned long long)textureDimension;
-(unsigned long long)promptTextureDimension;
-(BOOL)shouldUseRenderAudio;
-(BOOL)enabled;
@end

