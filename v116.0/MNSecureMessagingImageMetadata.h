/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface MNSecureMessagingImageMetadata : NSObject <TBase, NSCoding> {

	int __width;
	int __height;
	BOOL __width_isset;
	BOOL __height_isset;

}

@property (assign,setter=setWidth:,getter=width,nonatomic) int width; 
@property (assign,setter=setHeight:,getter=height,nonatomic) int height; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(BOOL)widthIsSet;
-(void)unsetWidth;
-(BOOL)heightIsSet;
-(void)unsetHeight;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(int)width;
-(int)height;
-(void)setWidth:(int)arg1 ;
-(void)validate;
-(void)setHeight:(int)arg1 ;
-(id)initWithWidth:(int)arg1 height:(int)arg2 ;
-(void)write:(id)arg1 ;
@end

