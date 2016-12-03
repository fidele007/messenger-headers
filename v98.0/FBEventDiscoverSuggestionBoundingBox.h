/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSNumber;

@interface FBEventDiscoverSuggestionBoundingBox : FBGraphQLInput {

	NSNumber* _n;
	NSNumber* _s;
	NSNumber* _e;
	NSNumber* _w;

}

@property (n,nonatomic,copy) NSNumber * n;              //@synthesize n=_n - In the implementation block
@property (s,nonatomic,copy) NSNumber * s;              //@synthesize s=_s - In the implementation block
@property (e,nonatomic,copy) NSNumber * e;              //@synthesize e=_e - In the implementation block
@property (w,nonatomic,copy) NSNumber * w;              //@synthesize w=_w - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSNumber *)n;
-(void)setN:(NSNumber *)arg1 ;
-(NSNumber *)s;
-(void)setS:(NSNumber *)arg1 ;
-(NSNumber *)e;
-(void)setE:(NSNumber *)arg1 ;
-(NSNumber *)w;
-(void)setW:(NSNumber *)arg1 ;
@end

