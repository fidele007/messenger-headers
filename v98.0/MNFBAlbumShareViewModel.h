/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSURL;

@interface MNFBAlbumShareViewModel : FBValueObject <NSCopying> {

	NSString* _title;
	NSString* _source;
	NSString* _albumDescription;
	NSArray* _images;
	NSURL* _href;

}

@property (nonatomic,copy,readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * source;                        //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSString * albumDescription;              //@synthesize albumDescription=_albumDescription - In the implementation block
@property (nonatomic,copy,readonly) NSArray * images;                         //@synthesize images=_images - In the implementation block
@property (nonatomic,copy,readonly) NSURL * href;                             //@synthesize href=_href - In the implementation block
-(id)initWithTitle:(id)arg1 source:(id)arg2 albumDescription:(id)arg3 images:(id)arg4 href:(id)arg5 ;
-(NSString *)albumDescription;
-(NSString *)source;
-(NSString *)title;
-(NSArray *)images;
-(NSURL *)href;
@end

