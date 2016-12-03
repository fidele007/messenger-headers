/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBWebImageSpecifier.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopying;
@class UIImage, NSURL, NSObject, NSString;

@interface FBWebImageMemorySpecifier : NSObject <FBWebImageSpecifier, NSCopying> {

	UIImage* _image;
	unsigned long long _imageFlag;
	NSURL* _url;
	NSObject*<NSCopying> _logicalIdentifier;

}

@property (nonatomic,readonly) UIImage * image;                                     //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) unsigned long long imageFlag;                        //@synthesize imageFlag=_imageFlag - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                                    //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSObject*<NSCopying> logicalIdentifier;              //@synthesize logicalIdentifier=_logicalIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)type;
-(id)initWithImage:(id)arg1 imageFlag:(unsigned long long)arg2 url:(id)arg3 logicalIdentifier:(id)arg4 ;
-(NSObject*<NSCopying>)logicalIdentifier;
-(unsigned long long)imageFlag;
-(NSString *)description;
-(NSURL *)url;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIImage *)image;
@end
