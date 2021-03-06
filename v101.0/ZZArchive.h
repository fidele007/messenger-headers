/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ZZChannel;
@class NSData, NSArray, NSURL;

@interface ZZArchive : NSObject {

	id<ZZChannel> _channel;
	unsigned long long _encoding;
	NSData* _contents;
	NSArray* _entries;

}

@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSData * contents;              //@synthesize contents=_contents - In the implementation block
@property (nonatomic,readonly) NSArray * entries;              //@synthesize entries=_entries - In the implementation block
+(id)archiveWithURL:(id)arg1 error:(out id*)arg2 ;
+(id)archiveWithData:(id)arg1 error:(out id*)arg2 ;
-(id)initWithChannel:(id)arg1 options:(id)arg2 error:(out id*)arg3 ;
-(BOOL)loadCanMiss:(BOOL)arg1 error:(out id*)arg2 ;
-(BOOL)updateEntries:(id)arg1 error:(out id*)arg2 ;
-(id)initWithData:(id)arg1 options:(id)arg2 error:(out id*)arg3 ;
-(NSData *)contents;
-(NSURL *)URL;
-(NSArray *)entries;
-(id)initWithURL:(id)arg1 options:(id)arg2 error:(out id*)arg3 ;
@end

