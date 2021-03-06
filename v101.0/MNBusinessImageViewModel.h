/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString;

@interface MNBusinessImageViewModel : FBValueObject <NSCopying> {

	BOOL _useNativeCornerRadius;
	NSURL* _imageURL;
	NSString* _imageName;
	NSString* _bundleClassName;
	long long _scaleMode;
	long long _alignmentMode;
	double _aspectRatio;
	double _roundedCornerRadius;

}

@property (nonatomic,copy,readonly) NSURL * imageURL;                        //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageName;                    //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleClassName;              //@synthesize bundleClassName=_bundleClassName - In the implementation block
@property (nonatomic,readonly) long long scaleMode;                          //@synthesize scaleMode=_scaleMode - In the implementation block
@property (nonatomic,readonly) long long alignmentMode;                      //@synthesize alignmentMode=_alignmentMode - In the implementation block
@property (nonatomic,readonly) double aspectRatio;                           //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (nonatomic,readonly) double roundedCornerRadius;                   //@synthesize roundedCornerRadius=_roundedCornerRadius - In the implementation block
@property (nonatomic,readonly) BOOL useNativeCornerRadius;                   //@synthesize useNativeCornerRadius=_useNativeCornerRadius - In the implementation block
-(id)initWithImageURL:(id)arg1 imageName:(id)arg2 bundleClassName:(id)arg3 scaleMode:(long long)arg4 alignmentMode:(long long)arg5 aspectRatio:(double)arg6 roundedCornerRadius:(double)arg7 useNativeCornerRadius:(BOOL)arg8 ;
-(NSString *)bundleClassName;
-(BOOL)useNativeCornerRadius;
-(long long)scaleMode;
-(NSURL *)imageURL;
-(double)aspectRatio;
-(long long)alignmentMode;
-(double)roundedCornerRadius;
-(NSString *)imageName;
@end

