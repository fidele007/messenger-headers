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

@interface FBEventDiscoverSuggestionLatLon : FBGraphQLInput {

	NSNumber* _latitude;
	NSNumber* _longitude;

}

@property (nonatomic,copy) NSNumber * latitude;               //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,copy) NSNumber * longitude;              //@synthesize longitude=_longitude - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setLatitude:(NSNumber *)arg1 ;
-(void)setLongitude:(NSNumber *)arg1 ;
-(NSNumber *)latitude;
-(NSNumber *)longitude;
@end

