/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAnnouncerBase.h>
#import <Messenger/FBContactImporterRevampModelListener.h>

@class NSString;

@interface FBContactImporterRevampModelListenerAnnouncer : FBAnnouncerBase <FBContactImporterRevampModelListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contactImporterRevampModelDidLoad:(id)arg1 ;
-(void)contactImporterRevampModelDidFailLoading:(id)arg1 withError:(id)arg2 ;
-(void)contactImporterRevampModelDidReadAddressBook:(id)arg1 ;
-(void)contactImporterRevampModelDidBatchLoad:(id)arg1 fromIndex:(unsigned long long)arg2 forNumberOfMatchedContacts:(unsigned long long)arg3 ;
-(void)contactImporterRevampModelDidBatchLoad:(id)arg1 forNumberOfMatchedContacts:(unsigned long long)arg2 forBatchAtIndex:(unsigned long long)arg3 ;
-(void)contactImporterRevampModelDidBatchLoad:(id)arg1 forNumberOfContacts:(unsigned long long)arg2 forBatchAtIndex:(unsigned long long)arg3 ;
-(void)contactImporterRevampModelDidLoadPYMK:(id)arg1 ;
-(void)contactImporterRevampModelDidFailPYMKLoading:(id)arg1 withError:(id)arg2 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

