/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface FBWebImageNetworkSpecifierInfoNode : FBValueObject <NSCopying> {

	NSURL* _url;
	unsigned long long _imageFlag;

}

@property (nonatomic,copy,readonly) NSURL * url;                          //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) unsigned long long imageFlag;              //@synthesize imageFlag=_imageFlag - In the implementation block
-(id)initWithUrl:(id)arg1 imageFlag:(unsigned long long)arg2 ;
-(unsigned long long)imageFlag;
-(NSURL *)url;
@end

