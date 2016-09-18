/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBComposerActivityIcon : FBValueObject <NSCopying> {

	unsigned long long _height;
	unsigned long long _width;
	NSString* _uri;

}

@property (nonatomic,readonly) unsigned long long height;              //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) unsigned long long width;               //@synthesize width=_width - In the implementation block
@property (nonatomic,copy,readonly) NSString * uri;                    //@synthesize uri=_uri - In the implementation block
-(id)initWithHeight:(unsigned long long)arg1 width:(unsigned long long)arg2 uri:(id)arg3 ;
-(unsigned long long)width;
-(unsigned long long)height;
-(NSString *)uri;
@end
