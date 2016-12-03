/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:09 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBShareable.h>

@class NSString, NSURL;

@interface FBShareableGraphQLEntity : NSObject <FBShareable> {

	NSString* _shareableID;
	NSString* _shareableText;
	NSString* _shareableTitle;
	NSString* _shareableType;
	NSURL* _shareableURL;
	NSURL* _shareableImageURL;
	NSString* _shareableQuote;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)shareableID;
-(id)shareableURL;
-(id)shareableType;
-(id)shareableText;
-(id)shareableTitle;
-(id)shareableSubtitle;
-(id)shareableDescription;
-(id)shareableImageURL;
-(id)shareableImage;
-(id)shareableQuote;
-(id)initWithGraphQLTypeName:(id)arg1 graphQLID:(id)arg2 text:(id)arg3 ;
-(id)initWithEntity:(id)arg1 ;
-(NSString *)debugDescription;
@end

