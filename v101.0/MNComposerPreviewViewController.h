/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBContainerViewController.h>
#import <Messenger/MNMediaCollectionViewControllerDelegate.h>
#import <Messenger/MNComposerTextParserListening.h>

@protocol MNMediaCollectionFetching, MNComposerPreviewViewControllerDelegate;
@class MNMediaCollectionViewController, MNComposerPreviewViewControllerInjector, MNComposerPreviewView, MNComposerBigPreviewGestureHandler, MNMediaCollectionNullStateView, NSString, NSArray;

@interface MNComposerPreviewViewController : FBContainerViewController <MNMediaCollectionViewControllerDelegate, MNComposerTextParserListening> {

	id<MNMediaCollectionFetching> _mediaFetcher;
	MNMediaCollectionViewController* _collectionViewController;
	MNComposerPreviewViewControllerInjector* _injector;
	MNComposerPreviewView* _previewView;
	double _startLoadTime;
	MNComposerBigPreviewGestureHandler* _composerBigPreviewGestureHandler;
	MNMediaCollectionNullStateView* _nullStateView;
	BOOL _previewShouldShow;
	id<MNComposerPreviewViewControllerDelegate> _delegate;
	NSString* _currentQuery;
	NSString* _currentQueryInPreview;
	NSArray* _resultTypes;
	NSArray* _appIds;
	NSString* _defaultQuery;

}

@property (assign,nonatomic,__weak) id<MNComposerPreviewViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL previewShouldShow;                                                 //@synthesize previewShouldShow=_previewShouldShow - In the implementation block
@property (nonatomic,copy) NSString * currentQuery;                                                    //@synthesize currentQuery=_currentQuery - In the implementation block
@property (nonatomic,copy,readonly) NSString * currentQueryInPreview;                                  //@synthesize currentQueryInPreview=_currentQueryInPreview - In the implementation block
@property (nonatomic,copy) NSArray * resultTypes;                                                      //@synthesize resultTypes=_resultTypes - In the implementation block
@property (nonatomic,copy) NSArray * appIds;                                                           //@synthesize appIds=_appIds - In the implementation block
@property (nonatomic,copy) NSString * defaultQuery;                                                    //@synthesize defaultQuery=_defaultQuery - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithInjector:(id)arg1 ;
-(void)setResultTypes:(NSArray *)arg1 ;
-(void)setDefaultQuery:(NSString *)arg1 ;
-(void)mediaCollectionViewController:(id)arg1 didSelectContent:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)mediaCollectionViewControllerDidDeselectContent:(id)arg1 ;
-(void)mediaCollectionViewControllerDidChangePreferredSize:(id)arg1 ;
-(void)mediaCollectionViewController:(id)arg1 didSelectPlatformApplication:(id)arg2 ;
-(void)mediaCollectionViewController:(id)arg1 didLoadNumberOfContents:(unsigned long long)arg2 ;
-(void)mediaCollectionViewController:(id)arg1 didLoadMediaAppID:(id)arg2 numberOfBytes:(unsigned long long)arg3 elapsedTime:(double)arg4 ;
-(void)mediaCollectionViewController:(id)arg1 didLoadFirstPageWithElapsedTime:(double)arg2 ;
-(void)mediaCollectionViewController:(id)arg1 willLoadMediaFromMediaFetcher:(id)arg2 ;
-(void)didParseSearchQuery:(id)arg1 ;
-(void)didParseBotMentionTriggerQuery:(id)arg1 ;
-(void)didParseUserMentionTriggerQuery:(id)arg1 queryRange:(NSRange)arg2 ;
-(void)setPreviewShouldShow:(BOOL)arg1 ;
-(void)_updatePreview;
-(void)_logStickerSelectionAtIndexIfApplicable:(unsigned long long)arg1 ;
-(void)_updateMediaFetcherForCurrentQuery;
-(void)_setUpPreviewViewControllerForCurrentMediaFetcher;
-(NSArray *)resultTypes;
-(NSString *)defaultQuery;
-(BOOL)previewShouldShow;
-(void)loadIndicesOfLoadedContentsWithCallbackQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)currentQueryInPreview;
-(void)hide;
-(void)show;
-(void)setDelegate:(id<MNComposerPreviewViewControllerDelegate>)arg1 ;
-(id<MNComposerPreviewViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(NSArray *)appIds;
-(void)setAppIds:(NSArray *)arg1 ;
-(void)setCurrentQuery:(NSString *)arg1 ;
-(NSString *)currentQuery;
@end

