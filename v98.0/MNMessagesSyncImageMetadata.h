/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableDictionary, NSString, NSData;

@interface MNMessagesSyncImageMetadata : NSObject <TBase, NSCoding> {

	int __width;
	int __height;
	NSMutableDictionary* __imageURIMap;
	int __imageSource;
	NSString* __rawImageURI;
	NSString* __rawImageURIFormat;
	NSMutableDictionary* __animatedImageURIMap;
	NSString* __imageURIMapFormat;
	NSString* __animatedImageURIMapFormat;
	BOOL __renderAsSticker;
	NSData* __miniPreview;
	BOOL __width_isset;
	BOOL __height_isset;
	BOOL __imageURIMap_isset;
	BOOL __imageSource_isset;
	BOOL __rawImageURI_isset;
	BOOL __rawImageURIFormat_isset;
	BOOL __animatedImageURIMap_isset;
	BOOL __imageURIMapFormat_isset;
	BOOL __animatedImageURIMapFormat_isset;
	BOOL __renderAsSticker_isset;
	BOOL __miniPreview_isset;

}

@property (assign,setter=setWidth:,getter=width,nonatomic) int width; 
@property (assign,setter=setHeight:,getter=height,nonatomic) int height; 
@property (setter=setImageURIMap:,getter=imageURIMap,nonatomic,retain) NSMutableDictionary * imageURIMap; 
@property (assign,setter=setImageSource:,getter=imageSource,nonatomic) int imageSource; 
@property (setter=setRawImageURI:,getter=rawImageURI,nonatomic,retain) NSString * rawImageURI; 
@property (setter=setRawImageURIFormat:,getter=rawImageURIFormat,nonatomic,retain) NSString * rawImageURIFormat; 
@property (setter=setAnimatedImageURIMap:,getter=animatedImageURIMap,nonatomic,retain) NSMutableDictionary * animatedImageURIMap; 
@property (setter=setImageURIMapFormat:,getter=imageURIMapFormat,nonatomic,retain) NSString * imageURIMapFormat; 
@property (setter=setAnimatedImageURIMapFormat:,getter=animatedImageURIMapFormat,nonatomic,retain) NSString * animatedImageURIMapFormat; 
@property (assign,setter=setRenderAsSticker:,getter=renderAsSticker,nonatomic) BOOL renderAsSticker; 
@property (setter=setMiniPreview:,getter=miniPreview,nonatomic,retain) NSData * miniPreview; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)renderAsSticker;
-(void)read:(id)arg1 ;
-(BOOL)animatedImageURIMapIsSet;
-(NSMutableDictionary *)animatedImageURIMap;
-(BOOL)imageURIMapIsSet;
-(NSMutableDictionary *)imageURIMap;
-(BOOL)miniPreviewIsSet;
-(NSData *)miniPreview;
-(NSString *)animatedImageURIMapFormat;
-(BOOL)rawImageURIIsSet;
-(NSString *)rawImageURI;
-(BOOL)rawImageURIFormatIsSet;
-(NSString *)rawImageURIFormat;
-(BOOL)animatedImageURIMapFormatIsSet;
-(BOOL)widthIsSet;
-(void)unsetWidth;
-(BOOL)heightIsSet;
-(void)unsetHeight;
-(int)imageSource;
-(void)setRenderAsSticker:(BOOL)arg1 ;
-(void)setImageURIMap:(NSMutableDictionary *)arg1 ;
-(void)setImageSource:(int)arg1 ;
-(void)setRawImageURI:(NSString *)arg1 ;
-(void)setRawImageURIFormat:(NSString *)arg1 ;
-(void)setAnimatedImageURIMap:(NSMutableDictionary *)arg1 ;
-(void)setImageURIMapFormat:(NSString *)arg1 ;
-(void)setAnimatedImageURIMapFormat:(NSString *)arg1 ;
-(void)setMiniPreview:(NSData *)arg1 ;
-(id)initWithWidth:(int)arg1 height:(int)arg2 imageURIMap:(id)arg3 imageSource:(int)arg4 rawImageURI:(id)arg5 rawImageURIFormat:(id)arg6 animatedImageURIMap:(id)arg7 imageURIMapFormat:(id)arg8 animatedImageURIMapFormat:(id)arg9 renderAsSticker:(BOOL)arg10 miniPreview:(id)arg11 ;
-(void)unsetImageURIMap;
-(BOOL)imageSourceIsSet;
-(void)unsetImageSource;
-(void)unsetRawImageURI;
-(void)unsetRawImageURIFormat;
-(void)unsetAnimatedImageURIMap;
-(NSString *)imageURIMapFormat;
-(BOOL)imageURIMapFormatIsSet;
-(void)unsetImageURIMapFormat;
-(void)unsetAnimatedImageURIMapFormat;
-(BOOL)renderAsStickerIsSet;
-(void)unsetRenderAsSticker;
-(void)unsetMiniPreview;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(int)width;
-(int)height;
-(void)setWidth:(int)arg1 ;
-(void)validate;
-(void)setHeight:(int)arg1 ;
-(void)write:(id)arg1 ;
@end

