/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FLAnimatedImageFrameDataSource.h>

@class FLAnimatedWebPDemuxer, NSArray, NSString;

@interface FLAnimatedWebPDataSource : NSObject <FLAnimatedImageFrameDataSource> {

	FLAnimatedWebPDemuxer* _demuxer;
	NSArray* _frameInfo;
	CGRect _imageRect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithWebPDemuxer:(id)arg1 frameInfo:(id)arg2 ;
-(BOOL)frameRequiresBlendingWithPreviousFrame:(unsigned long long)arg1 ;
-(id)blendImage:(id)arg1 atIndex:(unsigned long long)arg2 withPreviousImage:(id)arg3 ;
-(id)imageAtIndex:(unsigned long long)arg1 ;
@end

