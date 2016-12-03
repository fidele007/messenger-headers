/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBMQTTFolderViewed : NSObject <TBase, NSCoding> {

	NSString* __folder;
	BOOL __viewed;
	BOOL __folder_isset;
	BOOL __viewed_isset;

}

@property (setter=setFolder:,getter=folder,nonatomic,retain) NSString * folder; 
@property (assign,setter=setViewed:,getter=viewed,nonatomic) BOOL viewed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(id)initWithFolder:(id)arg1 viewed:(BOOL)arg2 ;
-(BOOL)folderIsSet;
-(void)unsetFolder;
-(BOOL)viewed;
-(BOOL)viewedIsSet;
-(void)unsetViewed;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)validate;
-(NSString *)folder;
-(void)setFolder:(NSString *)arg1 ;
-(void)write:(id)arg1 ;
-(void)setViewed:(BOOL)arg1 ;
@end

