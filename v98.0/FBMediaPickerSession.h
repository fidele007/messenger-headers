/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMediaPickerTaggingSearchProvider, FBMediaGalleryBannerProviderProtocol;
@class FBImageFilterLogger, FBStickersInPhotosLogger, FBTextOnPhotosLogger, FBDoodlesInPhotosLogger, FBCropLogger, FBUnifiedMediaGalleryLogger, FBCreativeEditingToolsLoggerAggregator, NSString, FBMediaPickerLogger, FBMediaPickerDataSourceManager, FBMediaPickerNuxController, FBMediaPickerAppearance, FBUserSession, FBMediaPickerTraits;

@interface FBMediaPickerSession : NSObject {

	id<FBMediaPickerTaggingSearchProvider> _taggingSearchProvider;
	BOOL _sessionStarted;
	BOOL _sessionStartedWithCameraRollAccess;
	unsigned long long _authorizedSessionStartTime;
	BOOL _ttiLoggingStopped;
	FBImageFilterLogger* _filterLoggerInternal;
	FBStickersInPhotosLogger* _stickersLoggerInternal;
	FBTextOnPhotosLogger* _textOnPhotosLoggerInternal;
	FBDoodlesInPhotosLogger* _doodlesLoggerInternal;
	FBCropLogger* _cropLoggerInternal;
	FBUnifiedMediaGalleryLogger* _unifiedMediaGalleryLoggerInternal;
	FBCreativeEditingToolsLoggerAggregator* _creativeEditingToolsLoggerAggregatorInternal;
	id<FBMediaGalleryBannerProviderProtocol> _bannerProvider;
	unsigned long long _attachmentLoggerSource;
	unsigned long long _creativeEditingToolsLoggerAggregatorSource;
	NSString* _sessionID;
	FBMediaPickerLogger* _logger;
	FBMediaPickerDataSourceManager* _dataSourceManager;
	FBMediaPickerNuxController* _nuxController;
	unsigned long long _pickerStyle;
	FBMediaPickerAppearance* _pickerAppearance;
	FBUserSession* _currentFBSession;

}

@property (nonatomic,readonly) FBMediaPickerTraits * traits; 
@property (nonatomic,readonly) id<FBAvatarTaggingSectionDataSource> tagSearchDataSource; 
@property (nonatomic,copy,readonly) NSString * sessionID;                                                                  //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) FBMediaPickerLogger * logger;                                                               //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) FBMediaPickerDataSourceManager * dataSourceManager;                                         //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,readonly) FBMediaPickerNuxController * nuxController;                                                 //@synthesize nuxController=_nuxController - In the implementation block
@property (nonatomic,readonly) id<FBMediaGalleryBannerProviderProtocol> bannerProvider; 
@property (nonatomic,readonly) unsigned long long pickerStyle;                                                             //@synthesize pickerStyle=_pickerStyle - In the implementation block
@property (nonatomic,readonly) FBMediaPickerAppearance * pickerAppearance;                                                 //@synthesize pickerAppearance=_pickerAppearance - In the implementation block
@property (nonatomic,readonly) FBUserSession * currentFBSession;                                                           //@synthesize currentFBSession=_currentFBSession - In the implementation block
@property (nonatomic,readonly) BOOL sessionStarted;                                                                        //@synthesize sessionStarted=_sessionStarted - In the implementation block
@property (nonatomic,readonly) FBImageFilterLogger * filterLogger; 
@property (nonatomic,readonly) FBCropLogger * cropLogger; 
@property (nonatomic,readonly) FBCreativeEditingToolsLoggerAggregator * creativeEditingToolsLoggerAggregator; 
@property (nonatomic,readonly) FBStickersInPhotosLogger * stickersLogger; 
@property (nonatomic,readonly) FBTextOnPhotosLogger * textOnPhotosLogger; 
@property (nonatomic,readonly) FBDoodlesInPhotosLogger * doodlesLogger; 
@property (nonatomic,readonly) FBUnifiedMediaGalleryLogger * unifiedGalleryLogger; 
-(id<FBMediaGalleryBannerProviderProtocol>)bannerProvider;
-(unsigned long long)pickerStyle;
-(FBUserSession *)currentFBSession;
-(void)logSessionTTIIfNeeded;
-(FBMediaPickerNuxController *)nuxController;
-(void)cancelSessionTTI;
-(id<FBAvatarTaggingSectionDataSource>)tagSearchDataSource;
-(FBCreativeEditingToolsLoggerAggregator *)creativeEditingToolsLoggerAggregator;
-(FBImageFilterLogger *)filterLogger;
-(FBCropLogger *)cropLogger;
-(FBStickersInPhotosLogger *)stickersLogger;
-(FBTextOnPhotosLogger *)textOnPhotosLogger;
-(FBDoodlesInPhotosLogger *)doodlesLogger;
-(FBUnifiedMediaGalleryLogger *)unifiedGalleryLogger;
-(void)markSessionStartIfNeeded;
-(id)initWithTraits:(id)arg1 style:(unsigned long long)arg2 taggingSearchProvider:(id)arg3 bannerProvider:(id)arg4 sessionID:(id)arg5 attachmentLoggerSource:(unsigned long long)arg6 creativeEditingToolsLoggerAggregatorSource:(unsigned long long)arg7 currentFBSession:(id)arg8 mediaDataSourceManager:(id)arg9 ;
-(FBMediaPickerAppearance *)pickerAppearance;
-(FBMediaPickerTraits *)traits;
-(NSString *)sessionID;
-(FBMediaPickerLogger *)logger;
-(BOOL)sessionStarted;
-(FBMediaPickerDataSourceManager *)dataSourceManager;
@end

