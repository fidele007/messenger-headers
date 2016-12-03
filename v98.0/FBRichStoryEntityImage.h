/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBRichStoryEntityImageProtocol.h>

@class NSString, NSNumber;

@interface FBRichStoryEntityImage : NSObject <FBRichStoryEntityImageProtocol> {

	NSString* _mediaID;
	NSString* _uri;
	NSNumber* _height;
	NSNumber* _width;

}

@property (nonatomic,copy) NSString * mediaID;                      //@synthesize mediaID=_mediaID - In the implementation block
@property (nonatomic,copy) NSString * uri;                          //@synthesize uri=_uri - In the implementation block
@property (nonatomic,copy) NSNumber * height;                       //@synthesize height=_height - In the implementation block
@property (nonatomic,copy) NSNumber * width;                        //@synthesize width=_width - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)imageWithID:(id)arg1 URI:(id)arg2 height:(id)arg3 width:(id)arg4 ;
-(NSString *)mediaID;
-(void)setMediaID:(NSString *)arg1 ;
-(id)initWithID:(id)arg1 URI:(id)arg2 height:(id)arg3 width:(id)arg4 ;
-(NSNumber *)width;
-(NSNumber *)height;
-(void)setWidth:(NSNumber *)arg1 ;
-(void)setHeight:(NSNumber *)arg1 ;
-(void)setUri:(NSString *)arg1 ;
-(NSString *)uri;
@end

