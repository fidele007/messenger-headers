/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBImageProcessingExecutionContext.h>

@class FBFilterer, NSURL, NSString;

@interface FBImageProcessingOpenGLExecutionContext : NSObject <FBImageProcessingExecutionContext> {

	FBFilterer* _thumbnailCanvas;
	FBFilterer* _standardCanvas;
	NSURL* _canvasAssetURL;

}

@property (retain) FBFilterer * thumbnailCanvas;                    //@synthesize thumbnailCanvas=_thumbnailCanvas - In the implementation block
@property (retain) FBFilterer * standardCanvas;                     //@synthesize standardCanvas=_standardCanvas - In the implementation block
@property (retain) NSURL * canvasAssetURL;                          //@synthesize canvasAssetURL=_canvasAssetURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBFilterer *)standardCanvas;
-(void)setStandardCanvas:(FBFilterer *)arg1 ;
-(FBFilterer *)thumbnailCanvas;
-(void)setThumbnailCanvas:(FBFilterer *)arg1 ;
-(void)prepareStandardCanvas:(id)arg1 ;
-(void)prepareThumbnailCanvas:(id)arg1 ;
-(NSURL *)canvasAssetURL;
-(void)setCanvasAssetURL:(NSURL *)arg1 ;
@end
